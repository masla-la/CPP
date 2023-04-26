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
	if (_energyPoints && _hitPoints)
	{

		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing ";
		std::cout << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
		takeDamage(_attackDamage);
	}
	else if (_energyPoints)
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
	else
		std::cout << "ClapTrap " << _name << " has no energy." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints)
	{
		std::cout << "ClapTrap " << _name << " take " << amount << " points of damage." << std::endl;
		_hitPoints -= amount;
		if (_hitPoints <= 0)
			std::cout << "ClapTrap " << _name << " die." << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints)
	{
		std::cout << "ClapTrap " << _name << " recover " << amount << " life points." << std::endl;
		_hitPoints += amount;
	}
	else
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
}
