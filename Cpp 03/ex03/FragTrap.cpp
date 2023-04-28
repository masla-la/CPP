/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:00:11 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/28 10:23:14 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " created" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap()
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " created" << std::endl;
}

FragTrap::FragTrap(FragTrap const &FragTrap): ClapTrap(FragTrap)
{
	*this = FragTrap;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " <<  this->_name << " is destroy" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (_energyPoints && _hitPoints)
	{

		std::cout << "FragTrap " << _name << " attacks " << target << ", causing ";
		std::cout << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else if (_energyPoints)
		std::cout << "FragTrap " << _name << " is dead" << std::endl;
	else
		std::cout << "FragTrap " << _name << " has no energy" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints)
	{
		std::cout << "FragTrap " << _name << " take " << amount << " points of damage" << std::endl;
		_hitPoints -= amount;
		if (_hitPoints <= 0)
			std::cout << "FragTrap " << _name << " die" << std::endl;
	}
	else
		std::cout << "FragTrap " << _name << " is dead" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints)
	{
		std::cout << "FragTrap " << _name << " recover " << amount << " life points" << std::endl;
		_hitPoints += amount;
	}
	else
		std::cout << "FragTrap " << _name << " is dead" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::string	line;
	std::cout << "High Five! >" << std::endl;
	while (line != "Y")
		std::cin >> line;
}
