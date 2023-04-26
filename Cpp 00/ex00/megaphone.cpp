/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:22:40 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/26 10:23:51 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	n;

	i = 1;
	if (ac < 2)
		std::cout << "Error";
	else
	{
		while (av[i])
		{
			n = 0;
			while (av[i][n])
			{
				av[i][n] = std::toupper(av[i][n]);
				std::cout << av[i][n];
				n++;
			}
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}