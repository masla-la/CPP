/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:21:09 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/26 10:21:15 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	announce();
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << ": is dead" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie *newZombie(std::string name)
{
	return (new Zombie(name));
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}

