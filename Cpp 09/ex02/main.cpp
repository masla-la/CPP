/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:09:31 by masla-la          #+#    #+#             */
/*   Updated: 2023/10/20 09:52:13 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inc/PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Error: incorrect arg" << std::endl;
		return 1;
	}
	Pmerge	pm(av);

	pm.shortAll();
	pm.printStacks();
}