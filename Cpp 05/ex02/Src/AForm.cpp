#include "../Inc/AForm.hpp"

AForm::AForm(void): _name("Default"), _signed(false), _gradeTooSign(150), _gradeTooExec(150)
{
}

AForm::AForm(std::string name, bool sign, const int gradeTooSign, const int gradeTooExec):
	_name(name), _signed(sign), _gradeTooSign(gradeTooSign), _gradeTooExec(gradeTooExec)
{
	std::cout << "Form: " << _name << " is created" << std::endl;
}

AForm::AForm(AForm const &AForm):
	_name(AForm.getName()), _signed(AForm.getSigned()), 
	_gradeTooSign(AForm.getGTS()), _gradeTooExec(AForm.getGTE())
{
	std::cout << "Copy constructor called" << std::endl;
}

AForm::~AForm(void)
{
	std::cout << "Form: " << _name << " destroy" << std::endl;
}

std::string	AForm::getName(void)const
{
	return _name;
}

bool	AForm::getSigned(void)const
{
	return	_signed;
}

int	AForm::getGTS(void)const
{
	return _gradeTooSign;
}

const	int	AForm::getGTE(void)const
{
	return _gradeTooExec;
}

const char	*AForm::GradeTooHighException::what(void)const throw()
{
	return "Grade too High";
}

const char	*AForm::GradeTooLowException::what(void)const throw()
{
	return "Grade too Low";
}

const char	*AForm::NoSignedException::what(void)const throw()
{
	return "Form no singed";
}

void	AForm::beSigned(Bureaucrat &obj)
{
	if (_signed == true)
		std::cout << "Form: " << _name << " it's already singed" << std::endl;
	else if (obj.getGrade() <= _gradeTooSign)
	{
		_signed = true;
		std::cout << obj.getName() << " signed " << _name << std::endl;
	}
	else
	{
		try
		{
			throw	GradeTooLowException();
		}
		catch (std::exception & exp)
		{
			std::cout << obj.getName() << "  couldn't sign " << _name 
			<< " because " << exp.what() << std::endl;
		}
	}
}

std::ostream	&operator<<( std::ostream &  ost, AForm & obj )
{
	std::string	sign;
	if (obj.getSigned())
		sign = "False";
	else
		sign = "True";
	ost << "Form: " << obj.getName() << std::endl
	<< "Signed: " << sign << std::endl
	<< "GradeTooSign: " << obj.getGTS() << std::endl
	<< "GradeTooSing: " << obj.getGTE();
	return ost;
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (this->_signed == false)
	{
		try
		{
			throw	NoSignedException();
		}
		catch(const std::exception& exp)
		{
			std::cerr << exp.what() << std::endl;
		}
		return ;
	}
	if (executor.getGrade() > this->_gradeTooExec)
	{
		try
		{
			throw	GradeTooLowException();
		}
		catch(const std::exception& exp)
		{
			std::cerr << exp.what() << std::endl;
		}
		return ;
	}
	this->executeForm(executor);
}
