/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:09:31 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/18 13:09:31 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inc/PmergeMe.hpp"

int main(int ac, char **av)
{
	Pmerge	pm(av[1]);

	pm.shortVec();
	pm.shortDeq();
	pm.printStacks();
}