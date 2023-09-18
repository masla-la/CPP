/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:48:48 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 09:48:49 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void):
	Form("ShrubberyCreationForm", false, 72, 45)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form("ShrubberyCreationForm", false, 72, 45)
{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &SCF):
	Form(SCF.getName(), SCF.getSigned(), SCF.getGTS(), SCF.getGTE())
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	return *this;
}

void	ShrubberyCreationForm::executeForm(Bureaucrat const & executor)const
{
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}

