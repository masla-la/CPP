#include "Inc/ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: enter only 1 arg" << std::endl;
		return 1;
	}
	std::string	str(av[1]);
	ScalarConverter c;
	c.convert(str);
	return 0;
}