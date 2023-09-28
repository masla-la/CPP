/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:09:31 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/28 10:58:53 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inc/PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 2 || ac > 2)
	{
		std::cout << "Error: incorrect arg" << std::endl;
		return 1;
	}
	Pmerge	pm(av[1]);

	pm.shortVec();
	pm.shortDeq();
	pm.printStacks();
}