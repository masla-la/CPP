#include "../Inc/Animal.hpp"

Animal::Animal(void)
{
	type = "Animal";
}

Animal::Animal(std::string str)
{
	type = str;
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

Animal::~Animal(void)
{
}

std::string	Animal::getType(void)const
{
	return (type);
}

void	Animal::makeSound(void)const
{
	std::cout << "Animal sound?" << std::endl;
}