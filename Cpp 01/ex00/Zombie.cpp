#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	if (this->_name != "")
		std::cout << this->_name << ": ";
	std::cout << "is dead" << std::endl;
}

void	Zombie::announce(void)
{
	if (this->_name != "")
		std::cout << this->_name << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
