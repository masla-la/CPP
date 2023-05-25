#include "../Inc/Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	brain = new Brain;
	std::cout << type << " created" << std::endl;
}

Cat::Cat(std::string str)
{
	type = str;
	brain = new Brain;
	std::cout << type << " created" << std::endl;
}

Cat::Cat(Cat const & Cat)
{
	*this = Cat;
	brain = new Brain(*(Cat.getBrain()));
	std::cout << type << " created" << std::endl;
}

Cat	&Cat::operator=(Cat const & obj)
{
	type = obj.type;
	brain = obj.getBrain();
	return (*this);
}

Cat::~Cat(void)
{
	delete brain;
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

Brain	*Cat::getBrain(void)const
{
	return (brain);
}

std::string	Cat::getIdea(int index)
{
	return (brain->get1Idea(index));
}

void	Cat::setIdea(int index, std::string idea)
{
	brain->setIdeas(index, idea);
}