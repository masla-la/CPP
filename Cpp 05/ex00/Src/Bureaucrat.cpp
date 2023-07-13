#include "../Inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Default"), _grade(150)
{
		std::cout << "Burearcrat: " << _name << " is created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name), _grade(grade)
{

	if (grade > 150)
	{
		try
		{
			throw GradeTooLowException();
		}
		catch (std::exception& exc)
		{
			std::cout << _name + ": " << exc.what() << std::endl;
			return ;
		}
	}
	else if (grade < 1)
	{
		try
		{
			throw GradeTooHighException();
		}
		catch (std::exception& exc)
		{
			std::cout << _name + ": " << exc.what() << std::endl;
			return ;
		}
	}
	std::cout << "Bureaucrat: " << name << " is created" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &Bureaucrat): _name(Bureaucrat.getName()), _grade(Bureaucrat.getGrade())
{
	std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=( Bureaucrat const &obj)
{
	this->_grade = obj.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat: " << _name << " destroy" << std::endl;
}

std::string const	Bureaucrat::getName(void)const
{
	return _name;
}

int	Bureaucrat::getGrade(void)const
{
	return _grade;
}

void	Bureaucrat::GradeInc(void)
{
	if (_grade == 1)
	{
		try
		{
			throw GradeTooHighException();
		}
		catch (std::exception& exc)
		{
			std::cout << _name + ": " << exc.what() << std::endl;
		}
	}
	else
		_grade--;
}

void	Bureaucrat::GradeInc(int num)
{
	if (_grade - num < 1)
	{
		try
		{
			throw GradeTooHighException();
		}
		catch (std::exception& exc)
		{
			std::cout << _name + ": " << exc.what() << std::endl;
		}
	}
	else
		_grade -= num;
}

void	Bureaucrat::GradeDec(void)
{
	if (_grade == 150)
	{
		try
		{
			throw GradeTooLowException();
		}
		catch (std::exception& exc)
		{
			std::cout << _name + ": " << exc.what() << std::endl;
		}
	}
	else
		_grade++;
}

void	Bureaucrat::GradeDec(int num)
{
	if (_grade + num > 150)
	{
		try
		{
			throw GradeTooLowException();
		}
		catch (std::exception& exc)
		{
			std::cout << _name + ": " << exc.what() << std::endl;
		}
	}
	else
		_grade += num;
}

const char	*Bureaucrat::GradeTooHighException::what(void)const throw()
{
	return "Grade too Low";
}

const char	*Bureaucrat::GradeTooLowException::what(void)const throw()
{
	return "Grade too High";
}

std::ostream	&operator<<(std::ostream &ost, Bureaucrat &obj)
{
	ost << "Bureaucrat: " << obj.getName() << std::endl
	<< "Grade: " << obj.getGrade();
	return ost;
}
