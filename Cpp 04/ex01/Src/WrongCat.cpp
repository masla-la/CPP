#include "../Inc/WrongCat.hpp"

WrongCat::WrongCat(void)
{
	type = "WrongCat";
	std::cout << type << " created" << std::endl;
}

WrongCat::WrongCat(std::string str)
{
	type = str;
	std::cout << type << " created" << std::endl;
}

WrongCat::WrongCat(WrongCat const &WrongCat)
{
	*this = WrongCat;
	std::cout << type << " created" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &obj)
{
	type = obj.type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << type << " destroy" << std::endl;
}

void	WrongCat::makeSound(void)const
{
	std::cout << "WrongCat sound?" << std::endl;
}

std::string	WrongCat::getType(void)const
{
	return (type);
}