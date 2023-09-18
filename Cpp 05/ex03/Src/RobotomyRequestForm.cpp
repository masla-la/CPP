/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:49:24 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 09:49:25 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void):
	Form("RobotomyRequestForm", false, 145, 137)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form("RobotomyRequestForm", false, 145, 137)
{
	srand((unsigned)time(NULL));
	if (rand() % 2)
		std::cout << target << " has been robotomized successfully 50% of the time" << std::endl;
	else
		std::cout << "The robotomy failed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &RRF): 
	Form(RRF.getName(), RRF.getSigned(), RRF.getGTS(), RRF.getGTE())
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	return *this;
}

void	RobotomyRequestForm::executeForm(Bureaucrat const & executor)const
{
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}
