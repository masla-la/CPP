#include "../Inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string str)
{
	type = str;
}
WrongAnimal::WrongAnimal(WrongAnimal const & WrongAnimal)
{
	*this = WrongAnimal;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const & obj)
{
	type = obj.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
}

void	WrongAnimal::makeSound(void)const
{
	std::cout << "WrongAnimal sound?" << std::endl;
}

std::string	WrongAnimal::getType(void)const
{
	return (type);
}