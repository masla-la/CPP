/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:21:22 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/26 10:21:23 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	ptr = "HI THIS IS BRAIN";
	std::string	*stringPTR = &ptr;
	std::string	&stringREF = ptr;

	std::cout << ">>MEMORY ADDRESS<<" << std::endl << std::endl;
	std::cout << "String ------> " << &ptr << std::endl;
	std::cout << "String PTR --> " << stringPTR << std::endl;
	std::cout << "String REF --> " << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << ">>STRING CONTENT<<" << std::endl << std::endl;
	std::cout << "String ------> " << ptr << std::endl;
	std::cout << "String PTR --> " << *stringPTR << std::endl;
	std::cout << "String REF --> " << stringREF << std::endl;
	std::cout << std::endl;
	return (0);
}