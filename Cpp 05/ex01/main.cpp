#include "Inc/Bureaucrat.hpp"

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

	Bureaucrat	Z("Z", 1);
	Form		obj("Fo", false, 1, 1);
	Z.GradeDec();
	Z.signForm(obj);
	Z.signForm(obj);
	std::cout << obj << std::endl;

	std::cout << "----------------------" << std::endl;
	return 0;
}
