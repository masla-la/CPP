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

	it.makeForm("ShrubberyCreationForm", "123");

	return 0;
}
