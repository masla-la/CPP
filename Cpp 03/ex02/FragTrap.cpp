/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:00:11 by masla-la          #+#    #+#             */
/*   Updated: 2023/05/05 11:55:19 by masla-la         ###   ########.fr       */
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

FragTrap &FragTrap::operator=( FragTrap const & obj)
{
	_name = obj._name;
	_attackDamage = obj._attackDamage;
	_hitPoints = obj._hitPoints;
	_energyPoints = obj._energyPoints;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " is destroy" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::string	line;
	std::cout << "High Five! >" << std::endl;
	while (line != "Y")
		std::cin >> line;
}
