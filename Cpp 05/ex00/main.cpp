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
	return 0;
}
