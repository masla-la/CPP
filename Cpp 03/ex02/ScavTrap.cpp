/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:00:12 by masla-la          #+#    #+#             */
/*   Updated: 2023/05/05 11:56:40 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	_name = "Default";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_protect = false;
	std::cout << "ScavTrap "<< this->_name << " created" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap()
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_protect = false;
	std::cout << "ScavTrap "<< this->_name << " created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &ScavTrap): ClapTrap(ScavTrap)
{
	*this = ScavTrap;
}

ScavTrap &ScavTrap::operator=( ScavTrap const & obj)
{
	_name = obj._name;
	_attackDamage = obj._attackDamage;
	_hitPoints = obj._hitPoints;
	_energyPoints = obj._energyPoints;
	_protect = obj._protect;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " is destroy" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (!_protect)
	{
		_protect = true;
		std::cout << "ScavTrap " << _name << " is now guardian the gate" << std::endl;
	}
	else
		std::cout << "ScavTrap " << _name << " is already guardian the gate" << std::endl;

}

void	ScavTrap::attack(const std::string& target)
{
	if (_energyPoints && _hitPoints)
	{

		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing ";
		std::cout << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else if (_energyPoints)
		std::cout << "ScavTrap " << _name << " is dead" << std::endl;
	else
		std::cout << "ScavTrap " << _name << " has no energy" << std::endl;
}
