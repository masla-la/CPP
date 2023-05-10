#include "../Inc/Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	std::cout << type << " created." << std::endl;
}

Dog::Dog(std::string str)
{
	type = str;
	std::cout << type << " created." << std::endl;
}

Dog::Dog(Dog const & Dog)
{
	*this = Dog;
	std::cout << type << " created." << std::endl;
}

Dog	&Dog::operator=(Dog const & obj)
{
	type = obj.type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << type << " destroy." << std::endl;
}

std::string	Dog::getType(void)const
{
	return (type);
}

void	Dog::makeSound(void)const
{
	std::cout << "Dog sound" << std::endl;
}
