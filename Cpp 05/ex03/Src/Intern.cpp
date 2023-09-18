/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:49:19 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 09:49:20 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(Intern const &Intern)
{
}

Intern	&Intern::operator=(Intern const & obj)
{
	return *this;
}

Intern::~Intern(void)
{
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	int	i;

	i = 0;
	std::string	formName[3] = 
			{"shrubbery creation", "robotomy request", "presidential pardon"};
	while (name != formName[i] && i != 3)
		i++;
	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << formName[i] << std::endl;
			return new ShrubberyCreationForm(target);
		case 1:
			std::cout << "Intern creates " << formName[i] << std::endl;
			return new RobotomyRequestForm(target);
		case 2:
			std::cout << "Intern creates " << formName[i] << std::endl;
			return new PresidentialPardonForm(target);
		default:
			try
			{
				throw DoesExistFormException();
			}
			catch (std::exception &exp)
			{
				std::cerr << exp.what() << std::endl;
			}
			break;
	}
	return NULL;
}

const char	*Intern::DoesExistFormException::what(void)const throw()
{
	return "Form does't exist";
}
