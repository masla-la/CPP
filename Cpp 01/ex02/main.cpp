#include <iostream>

int	main()
{
	std::string	ptr = "HI THIS IS BRAIN";
	std::string	*stringPTR = &ptr;
	std::string	&stringREF = ptr;

	std::cout << ">>MEMORY ADDRESS<<" << std::endl << std::endl;
	std::cout << "String ------> " << &ptr << std::endl;
	std::cout << "String PTR --> " << stringPTR << std::endl;
	std::cout << "String REF --> " << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << ">>STRING CONTENT<<" << std::endl << std::endl;
	std::cout << "String ------> " << ptr << std::endl;
	std::cout << "String PTR --> " << *stringPTR << std::endl;
	std::cout << "String REF --> " << stringREF << std::endl;
	std::cout << std::endl;
	return (0);
}