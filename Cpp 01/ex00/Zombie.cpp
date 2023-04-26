/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:20:54 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/26 10:20:59 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
