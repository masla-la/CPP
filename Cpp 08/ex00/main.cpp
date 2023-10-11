/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:51:36 by masla-la          #+#    #+#             */
/*   Updated: 2023/10/06 12:55:35 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inc/easyfind.hpp"

#include <map>

int	main()
{
	std::array<int, 5> arr = { 3, 2, 4, 5, 1 };
	std::array<int, 5> arr2 = { 3, 2, 4, 42, 1 };

	std::vector<int>	arr3;
	arr3.insert(arr3.begin(), 1);
	arr3.insert(arr3.begin(), 2);
	arr3.insert(arr3.begin(), 3);

	int	cmp = 42;

	std::cout << easyfind(arr, cmp) << std::endl;
	std::cout << easyfind(arr2, cmp) << std::endl;
	std::cout << easyfind(arr3, cmp) << std::endl;

	std::map<int, int> m;

	//
	for (unsigned int i = 0; i < 15; i++)
		m[i] = i;
	std::cout << easyfind(m, cmp) << std::endl;
	
	return 0;
}