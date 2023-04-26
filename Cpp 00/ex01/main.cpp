/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:22:47 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/26 10:23:45 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook		pb;
	std::string		str;

	while (str != "EXIT")
	{
		std::cout << "Enter a comand" << std::endl;
		std::cout << "> ";
		std::getline(std::cin, str);
		if (str == "ADD")
			pb.add();
		else if (str == "SEARCH")
			pb.search();
		else if (str != "" && str != "EXIT")
			std::cout << ">> Invalid comand <<" << std::endl;
	}
	return (0);
}