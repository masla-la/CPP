#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap created" << std::endl;
	_name = "Default";
	ClapTrap::_name = "_clap_name";
	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name): FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap created" << std::endl;
	_name = "Default";
	ClapTrap::_name = name +  "_clap_name";
	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const &DiamondTrap): FragTrap(DiamondTrap), ScavTrap(DiamondTrap)
{
	*this = DiamondTrap;
}

DiamondTrap	&DiamondTrap::operator=( DiamondTrap const & obj)
{
	_name = obj._name;
	ClapTrap::_name = obj.ClapTrap::_name;
	FragTrap::_hitPoints = obj.FragTrap::_hitPoints;
	ScavTrap::_energyPoints = obj.ScavTrap::_energyPoints;
	FragTrap::_attackDamage = obj.FragTrap::_attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap is destroy" << std::endl;
}

void	DiamondTrap::attack( const std::string &target )
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name is " << _name << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::_name << std::endl;

	std::cout << "------------------ > " << _hitPoints << std::endl;
}
