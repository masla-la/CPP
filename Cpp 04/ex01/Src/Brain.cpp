#include "../Inc/Brain.hpp"

Brain::Brain(void)
{
	ideas = new std::string[100];
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(Brain const & Brain)
{
	ideas = new std::string[100];
	for(int i = 0; i < 100; i++)
		ideas[i] = Brain.ideas[i];
	std::cout << "Brain created" << std::endl;
}

Brain	&Brain::operator=(Brain const &obj)
{
	for(int i = 0; i < 100; i++)
		ideas[i] = obj.ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	delete [] ideas;
	std::cout << "Brain destroy" << std::endl;
}

std::string *Brain::getIdeas(void)
{
	return (ideas);
}

std::string Brain::get1Idea(int index)
{
	if (index > 99 || index < 0)
	{
		std::cout << "Can't get idea" << std::endl;
		return NULL;
	}
	return (ideas[index]);
}

void	Brain::setIdeas(int index, std::string idea)
{
	if (index > 99 || index < 0)
	{	
		std::cout << "Can't set idea" << std::endl;
		return ;
	}
	ideas[index] = idea;
}
