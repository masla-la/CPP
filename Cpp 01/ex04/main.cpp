/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:21:44 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/26 12:33:02 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	readfd(std::string oldfd, std::string newfd, std::string oldstr, std::string newstr)
{
	std::ifstream	fd(oldfd);
	std::string	line;
	size_t		l_oldstr;
	size_t		l_newstr;
	int			i;

	if (!fd)
	{
		std::cout << oldfd << ": Do not exist you don't have permissions." << std::endl;
		return ;
	}
	l_oldstr = oldstr.length();
	l_newstr = newstr.length();
	line = "";
	std::ofstream	fd2(newfd);
	while (1)
	{
		std::getline(fd, line);
		if (!line.find(oldstr))
		{
			i = line.find(oldstr);
			line.erase(i, l_oldstr);
			line.insert(i, newstr);
		}
		fd2 << line << std::endl;
		if (fd.eof())
			break;
	}
	fd.close();
	fd2.close();
}

int	main(int ac, char **av)
{
	std::string	oldfd;
	std::string	newfd;
	std::string	oldstr;
	std::string	newstr;

	if (ac != 4)
	{
		std::cout << "Incorrect arguments" << std::endl;
		return 1;
	}
	oldfd = av[1];
	oldstr = av[2];
	newstr = av[3];
	newfd = oldfd + ".replace";
	readfd(oldfd, newfd, oldstr, newstr);
}