#include "../Inc/Animal.hpp"

Animal::Animal(void)
{
	type = "Animal";
	std::cout << type << " created" << std::endl;
}

Animal::Animal(std::string str)
{
	type = str;
	std::cout << type << " created" << std::endl;
}

Animal::Animal(Animal const & Animal)
{
	*this = Animal;
	std::cout << type << " created" << std::endl;
}

Animal	&Animal::operator=(Animal const & obj)
{
	type = obj.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << type << " destroy" << std::endl;
}

std::string	Animal::getType(void)const
{
	return (type);
}

void	Animal::makeSound(void)const
{
	std::cout << "Animal sound?" << std::endl;
}