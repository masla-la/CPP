/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:21:13 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/26 10:21:14 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*Z;
	int		i;

	i = 0;
	Z = new Zombie[N];
	while (i < N)
	{
		Z[i].set_name(name + std::to_string(i));
		i++;
	}
	return (&(Z[0]));
}
