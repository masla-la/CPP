/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:48:06 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 09:54:27 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/Form.hpp"

Form::Form(void): _name("Default"), _signed(false), _gradeTooSign(150), _gradeTooExec(150)
{
}

Form::Form(std::string name, bool sign, const int gradeTooSign, const int gradeTooExec):
	_name(name), _signed(sign), _gradeTooSign(gradeTooSign), _gradeTooExec(gradeTooExec)
{
	std::cout << "Form: " << _name << " is created" << std::endl;
}

Form::Form(Form const &Form):
	_name(Form.getName()), _signed(Form.getSigned()), 
	_gradeTooSign(Form.getGTS()), _gradeTooExec(Form.getGTE())
{
	std::cout << "Copy constructor called" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Form: " << _name << " destroy" << std::endl;
}

std::string	Form::getName(void)const
{
	return _name;
}

bool	Form::getSigned(void)const
{
	return	_signed;
}

int	Form::getGTS(void)const
{
	return _gradeTooSign;
}

const	int	Form::getGTE(void)const
{
	return _gradeTooExec;
}

const char	*Form::GradeTooHighException::what(void)const throw()
{
	return "Grade too High";
}

const char	*Form::GradeTooLowException::what(void)const throw()
{
	return "Grade too Low";
}

void	Form::beSigned(Bureaucrat &obj)
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

std::ostream	&operator<<( std::ostream &  ost, Form & obj )
{
	std::string	sign;
	if (obj.getSigned() == false)
		sign = "False";
	else
		sign = "True";
	ost << "Form: " << obj.getName() << std::endl
	<< "Signed: " << sign << std::endl
	<< "GradeTooSign: " << obj.getGTS() << std::endl
	<< "GradeTooSing: " << obj.getGTE();
	return ost;
}
