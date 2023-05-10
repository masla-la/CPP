#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain created." << std::endl;
}

Brain::Brain(Brain const & Brain)
{
	*this = Brain;
}

Brain	&Brain::operator=(Brain const &obj)
{
	_ideas = obj._ideas;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destroy." << std::endl;
}