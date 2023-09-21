/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:51:36 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/21 11:51:22 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inc/easyfind.hpp"

int	main()
{
	std::array<int, 5> arr = { 3, 2, 4, 5, 1 };
	std::array<int, 5> arr2 = { 3, 2, 4, 42, 1 };
	int			z[5]= { 2, 3, 42, 4, 5 };

	char	i[3] = { '1', '*', '3' };
	char	c[3] = { '1', 42, '3' };
	int	cmp = 42;
	std::cout << easyfind(arr, cmp) << std::endl;
	std::cout << easyfind(arr2, cmp) << std::endl;
	std::cout << easyfind(z, cmp) << std::endl;
	std::cout << easyfind(i, cmp) << std::endl;
	std::cout << easyfind(c, cmp) << std::endl;
	return 0;
}