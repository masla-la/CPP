#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook		pb;
	std::string		str;

	while (str != "EXIT")
	{
		std::cout << "Enter a comand" << std::endl;
		std::cout << "> ";
		std::getline(std::cin, str);
		if (str == "ADD")
			pb.add();
		else if (str == "SEARCH")
			pb.search();
		else if (str != "" && str != "EXIT")
			std::cout << ">> Invalid comand <<" << std::endl;
	}
	return (0);
}