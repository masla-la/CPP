/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:24:18 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/26 13:13:43 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->_name = "Default";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap " << this->_name << " created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ClapTrap " << this->_name << " created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &ClapTrap)
{
	*this = ClapTrap;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " is destroy" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints && _hitPoints)
	{

		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing ";
		std::cout << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else if (_energyPoints)
		std::cout << "ClapTrap " << _name << " is dead" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " has no energy" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints)
	{
		std::cout << "ClapTrap " << _name << " take " << amount << " points of damage" << std::endl;
		_hitPoints -= amount;
		if (_hitPoints <= 0)
			std::cout << "ClapTrap " << _name << " die" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints)
	{
		std::cout << "ClapTrap " << _name << " recover " << amount << " life points" << std::endl;
		_hitPoints += amount;
	}
	else
		std::cout << "ClapTrap " << _name << " is dead" << std::endl;
}
