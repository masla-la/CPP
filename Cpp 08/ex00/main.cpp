/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:51:36 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 10:51:36 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inc/easyfind.hpp"

int	main()
{
	std::array<int, 5> arr = { 3, 2, 4, 5, 1 };

	char	i[3] = { '1', 42, '3' };
	int	cmp = 42;
	std::cout << easyfind(arr, cmp) << std::endl;
	std::cout << easyfind(i, cmp) << std::endl;
	return 0;
}