/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:00:19 by masla-la          #+#    #+#             */
/*   Updated: 2023/05/05 12:14:13 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main( void )
{
	ClapTrap cl4ptp("cl4ptp");
	ScavTrap ST;
	DiamondTrap DT;
	DiamondTrap	DT3("123");
	DiamondTrap DT2("TMP NAME");

	DT.whoAmI();

	DT.beRepaired(100);
	
	DT2 = DT;

	std::cout << "---------" << std::endl;
	DT2.whoAmI();
	std::cout << "---------" << std::endl;

	cl4ptp.attack("Handsome Jack");
	cl4ptp.takeDamage(6);
	cl4ptp.beRepaired(4);
	cl4ptp.takeDamage(3);
	cl4ptp.beRepaired(8);
	cl4ptp.takeDamage(17);
	ST.guardGate();
	ST.attack("adada");

	std::cout << "---------" << std::endl;
	DT.attack("12312312321");
}
