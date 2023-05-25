#include "../Inc/Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	std::cout << type << " created" << std::endl;
}

Cat::Cat(std::string str)
{
	type = str;
	std::cout << type << " created" << std::endl;
}

Cat::Cat(Cat const & Cat)
{
	*this = Cat;
	std::cout << type << " created" << std::endl;
}

Cat	&Cat::operator=(Cat const & obj)
{
	type = obj.type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << type << " destroy" << std::endl;
}

std::string Cat::getType(void)const
{
	return (type);
}

void	Cat::makeSound(void)const
{
	std::cout << "Cat sound" << std::endl;
}
