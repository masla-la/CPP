#include "../Inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	type = "WrongAnimal";
	std::cout << type << " created." << std::endl;
}

WrongAnimal::WrongAnimal(std::string str)
{
	type = str;
	std::cout << type << " created." << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal const & WrongAnimal)
{
	*this = WrongAnimal;
	std::cout << type << " created." << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const & obj)
{
	type = obj.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << type << " destroy." << std::endl;
}

void	WrongAnimal::makeSound(void)const
{
	std::cout << "WrongAnimal sound?" << std::endl;
}

std::string	WrongAnimal::getType(void)const
{
	return (type);
}