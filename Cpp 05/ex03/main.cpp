/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:49:29 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 09:59:26 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inc/Bureaucrat.hpp"
#include "Inc/Intern.hpp"

int	main()
{
	Bureaucrat	A("123", 1);
	Bureaucrat	B("321", 150);

	A.GradeInc();
	B.GradeDec();
	Bureaucrat	C("456", 0);
	Bureaucrat	D("654", 151);
	std::cout << A << std::endl;

	std::cout << "----------------------" << std::endl;

	RobotomyRequestForm	P("123");

	P.execute(A);
	P.beSigned(A);
	P.execute(B);
	P.execute(A);

	Intern	it;

	it.makeForm("shrubbery creation", "123");

	return 0;
}
