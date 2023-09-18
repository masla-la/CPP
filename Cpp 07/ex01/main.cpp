/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:51:08 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 10:51:09 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inc/Iter.hpp"

template<typename T>
void	write(T const &t)
{
	std::cout << t << std::endl;
}

int	main()
{
	char	addr3[3]= { '1', '2', '3' };
	std::string	addr[5] = { "abc", "bca", "cba", "ef", "fe" };
	int			addr2[5] = { 5, 4, 3, 2, 1 };
	int			len = 5;

	iter(addr, len, write);
	iter(addr2, len, write);
	iter(addr3, 3, write);

	return 0;
}