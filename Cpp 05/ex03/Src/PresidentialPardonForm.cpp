/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:49:22 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 09:49:22 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):
	Form("PresidentialPardonForm", false, 145, 137)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form("PresidentialPardonForm", false, 145, 137)
{
	std::ofstream	fd(target + "_shrubbery");

	fd << "ASCII TREE" << std::endl;
	fd.close();
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &PPF):
	Form(PPF.getName(), PPF.getSigned(), PPF.getGTS(), PPF.getGTE())
{

}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	return *this;
}

void	PresidentialPardonForm::executeForm(Bureaucrat const & executor)const
{
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}
