#include "Inc/Cat.hpp"

Cat::Cat(void): Animal()
{
	type = "Cat";
}

Cat::Cat(std::string str): Animal(str)
{
	this->type = str;
}

Cat::Cat(Cat const & Cat): Animal(Cat)
{
	*this = Cat;
}

Cat	&Cat::operator=(Cat const & obj)
{
	type = obj.type;
	return (*this);
}

Cat::Cat(void)
{
}

std::string Cat::getType(void)
{
	return (type);
}

void	Cat::makeSound(void)
{
	std::cout << "" << std::endl;
}
