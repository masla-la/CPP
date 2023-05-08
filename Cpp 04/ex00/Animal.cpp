#include "Inc/Animal.hpp"

Animal::Animal(void)
{
}

Animal::Animal(std::string str)
{
	this->type = str;
}

Animal::Animal(Animal const & Animal)
{
	*this = Animal;
}

Animal	&Animal::operator=(Animal const & obj)
{
	type = obj.type;
	return (*this);
}

Animal::Animal(void)
{
}

std::string	Animal::getType(void)
{
	return (type);
}

void	Animal::makeSound(void)
{
	std::cout << "" << std::endl;
}