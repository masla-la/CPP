#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->_name = "ClapTrap";
	std::cout << "Default " << this->_name << " created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	std::cout << this->_name << " created" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name << " is dead" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
}

void	ClapTrap::takeDamage(unsigned int amount)
{
}

void	beRepaired(unsigned int amount)
{
}
