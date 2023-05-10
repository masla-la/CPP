#include "../Inc/Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
}

Dog::Dog(std::string str)
{
	type = str;
}

Dog::Dog(Dog const & Dog)
{
	*this = Dog;
}

Dog	&Dog::operator=(Dog const & obj)
{
	type = obj.type;
	return (*this);
}

Dog::~Dog(void)
{
}

std::string	Dog::getType(void)const
{
	return (type);
}

void	Dog::makeSound(void)const
{
	std::cout << "Dog sound" << std::endl;
}
