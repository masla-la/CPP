#include "../Inc/Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
}

Cat::Cat(std::string str)
{
	type = str;
}

Cat::Cat(Cat const & Cat)
{
	*this = Cat;
}

Cat	&Cat::operator=(Cat const & obj)
{
	type = obj.type;
	return (*this);
}

Cat::~Cat(void)
{
}

std::string Cat::getType(void)const
{
	return (type);
}

void	Cat::makeSound(void)const
{
	std::cout << "Cat sound" << std::endl;
}
