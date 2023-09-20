/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:50:15 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/20 12:52:14 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inc/Serializer.hpp"
#include "Inc/Data.hpp"

int	main(int ac, char **av)
{
	Data	*a = new Data();

	a->setData("123");

	std::cout << "a: " <<  a << " -> " << a->getData() << std::endl;

	uintptr_t	d;
	d = Serializer::serialize(a);
	Data	*b = Serializer::deserialize(d);

	std::cout << "b: " << b << " -> " << b->getData() << std::endl;

	delete a;
	return 0;
}