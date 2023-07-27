#include "Inc/ScalarConverter.hpp"

/*void	conversion(std::string str)
{
	std::cout << "char: " << std::basic_string<char>(str) << std::endl;
	std::cout << "int: " << static_cast<int>(str) << std::endl;
	std::cout << "float: " << stof(str) << std::endl;
	std::cout << "double: " << stod(str) << std::endl;
}**/

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