#include "../Inc/Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	brain = new Brain;
	std::cout << type << " created" << std::endl;
}

Dog::Dog(std::string str)
{
	type = str;
	brain = new Brain;
	std::cout << type << " created" << std::endl;
}

Dog::Dog(Dog const & Dog)
{
	*this = Dog;
	brain = new Brain(*(Dog.getBrain()));
	std::cout << type << " created" << std::endl;
}

Dog	&Dog::operator=(Dog const & obj)
{
	type = obj.type;
	brain = obj.getBrain();
	return (*this);
}

Dog::~Dog(void)
{
	delete brain;
	std::cout << type << " destroy" << std::endl;
}

std::string	Dog::getType(void)const
{
	return (type);
}

void	Dog::makeSound(void)const
{
	std::cout << "Dog sound" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return (brain);
}

std::string	Dog::getIdea(int index)
{
	return (brain->get1Idea(index));
}

void	Dog::setIdea(int index, std::string idea)
{
	brain->setIdeas(index, idea);
}
