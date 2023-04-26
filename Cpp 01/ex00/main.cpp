/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:20:45 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/26 10:20:46 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << ">>Stack<<" << std::endl;
	Zombie	stack("Foo");
	Zombie	stack2;

	
	randomChump("randomC");
	stack.announce();
	stack2.announce();

	std::cout << ">>Head<<" << std::endl;
	Zombie	*head;
	head = newZombie("Zoo");
	head->announce();
	delete head;
	return (0);
}
