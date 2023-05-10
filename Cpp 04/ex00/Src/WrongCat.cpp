#include "../Inc/WrongCat.hpp"

WrongCat::WrongCat(void)
{
	type = "WrongCat";
}

WrongCat::WrongCat(std::string str)
{
	type = str;
}

WrongCat::WrongCat(WrongCat const &WrongCat)
{
	*this = WrongCat; 
}

WrongCat	&WrongCat::operator=(WrongCat const &obj)
{
	type = obj.type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
}

void	WrongCat::makeSound(void)const
{
	std::cout << "WrongCat sound?" << std::endl;
}

std::string	WrongCat::getType(void)const
{
	return (type);
}