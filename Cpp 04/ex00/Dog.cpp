#include "Inc/Dog.hpp"

Dog::Dog(void): Animal()
{
	type = "Dog";
}

Dog::Dog(std::string str): Animal(str)
{
	this->type = str;
}

Dog::Dog(Dog const & Dog): Animal(Dog)
{
	*this = Dog;
}

Dog	&Dog::operator=(Dog const & obj)
{
	type = obj.type;
	return (*this);
}

Dog::Dog(void)
{
}

std::string	Dog::getType(void)
{
	return (type);
}

void	Dog::makeSound(void)
{
	std::cout << "" << std::endl;
}
