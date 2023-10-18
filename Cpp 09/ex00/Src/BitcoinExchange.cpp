/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:09:58 by masla-la          #+#    #+#             */
/*   Updated: 2023/10/18 12:16:36 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../Inc/BitcoinExchange.hpp"

BTC::BTC(void)
{
}

BTC::BTC(BTC const & obj)
{
	_data = obj._data;
}

BTC::BTC(char *file)
{
	setData(file);
}

BTC::~BTC(void)
{
}

BTC	&BTC::operator=(BTC const & obj)
{
	_data = obj._data;
	return  *this;
}

void	BTC::setData(char *file)
{
	std::ifstream	fd(file);
	std::string		line;
	std::string		tmp;

	if (!fd)
	{
		std::cout << "Error: "<< file << ": Do not exist." << std::endl;
		return ;
	}
	line = "";
	while (1)
	{
		std::getline(fd, line);
		if (!line.empty() && isdigit(line[0]))
		{
			std::getline(fd, tmp, ',');
			std::getline(fd, line);
			_data[tmp] = std::stof(line);
		}
		if (fd.eof())
			break;
	}
	fd.close();
}

void	BTC::proccessInput(char *file)
{
	std::ifstream	fd(file);
	std::string		line;
	std::string		tmp;

	if (!fd)
	{
		std::cout << "Error: " << file << ": Do not exist." << std::endl;
		return ;
	}
	line = "";
	std::getline(fd, line);
	while (1)
	{
		std::getline(fd, line);
		tmp = line;
		if (!checkInput(tmp) || !checkInput2(line))
		{
			std::cout << "Error: not a positive number." << std::endl;
			std::cout << "Error: bad input => " << tmp << std::endl;
		}
		else
		{
			tmp.erase(tmp.find("|"), tmp.length());
			std::cout << tmp << " => ";
			//
			tmp = line;
			tmp.erase(0, tmp.find("|") + 2);
			std::cout << tmp << " ";
			//
			writeAmount(line, tmp);
		}
		if (fd.eof())
			break;
	}
}

void	BTC::writeAmount(std::string line, std::string val)
{
	std::stringstream	tmp(line);
	std::string	year, mounth, day;
	std::getline(tmp, year, '-');
	std::getline(tmp, mounth, '-');
	std::getline(tmp, day, '-');
	int y = stoi(year);
	int	m = stoi(mounth);
	int	d = stoi(day);

	if (d > 1)
		d--;
	else if (m > 1)
	{
		d = 31;
		m--;
	}
	else if (y > 2008)
	{
		d = 31;
		m = 12;
		y--;
	}
	std::stringstream find;
	find << y << '-' << std::setw(2) << std::setfill('0') << m << '-' << std::setw(2) << std::setfill('0') << d;
	if (_data.find(find.str()) != _data.end())
		std::cout << "= " << (_data[find.str()] * stof(val)) << std::endl;
	else
		writeAmount(find.str(), val);
}

bool	checkInput(std::string input)//falta comprobar el año
{
	if (input.length() <= 11 | input[11] != '|')
		return false;

	std::string tmp;
	std::string	tmp2;
	std::string	m[12] = { "31", "28", "31", "30", "31", "30", "31", "31", "30", "31", "30", "31" };

	input.erase(11, input.length());
	tmp = input;
	for(unsigned int i = 0; i < 10; i++)
		if (!isdigit(tmp[i]) && tmp[i] != '-')
			return false;
	tmp.erase(0, tmp.find("-"));
	if (stol(tmp) > 12)
		return false;
	tmp2 = tmp;
	tmp2.erase(0, tmp.find("-"));
	if (std::stod(tmp2) > std::stod(m[stoi(tmp)]))
		return false;
	return true;
}

bool	checkInput2(std::string	input)
{
	input.erase(0, input.find("|"));
	input.erase(0, 2);
	if (input.size() <= 0)
		return false;
	for (unsigned int i = 0; i < input.size(); i++)
		if (!isdigit(input[i]) && input[i] != '.')
			return false;
	return true;
}
