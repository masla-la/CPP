/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:09:58 by masla-la          #+#    #+#             */
/*   Updated: 2023/10/19 10:37:58 by masla-la         ###   ########.fr       */
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
	int				i;

	if (!fd)
	{
		std::cout << "Error: " << file << ": Do not exist." << std::endl;
		return ;
	}
	line = "";
	std::getline(fd, line);
	if (fd.eof())
	{
		std::cout << "Error: empty file." << std::endl;
		return ;
	}
	while (1)
	{
		std::getline(fd, line);
		tmp = line;
		if (!checkInput(tmp))
			std::cout << "Error: bad input => " << tmp << std::endl;
		else if ((i = checkInput2(line)) != 0)
		{
			if (i == 1)
				std::cout << "Error: no especific exchange_rate." << std::endl;
			else if (i == 2)
				std::cout << "Error: invalid exchange_rate." << std::endl;
			else if (i == 3)
				std::cout << "Error: not a positive number." << std::endl;
		}
		else
		{
			tmp.erase(tmp.find("|"), tmp.length());
			std::cout << tmp << " => ";
			tmp = line;
			tmp.erase(0, tmp.find("|") + 2);
			std::cout << tmp << " ";
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

bool	checkInput(std::string input)
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
	tmp2 = input;
	tmp2.erase(tmp2.find("-"), tmp2.size());
	if (std::stod(tmp2) > 2022 || std::stod(tmp2) < 2009)
		return false;
	tmp.erase(0, tmp.find("-"));
	tmp2 = tmp;
	tmp2.erase(0, tmp2.find("-") + 1);
	tmp = tmp2;
	tmp.erase(0, tmp.find("-") + 1);
	tmp2.erase(tmp2.find("-"), tmp2.size());
	if (std::stod(tmp2) > 12 || std::stod(tmp2) < 1)
		return false;
	if (std::stod(tmp) > std::stod(m[stoi(tmp2) - 1]))
		return false;
	return true;
}

int	checkInput2(std::string	input)
{
	input.erase(0, input.find("|"));
	input.erase(0, 2);
	if (input.size() <= 0)
		return 1;
	for (unsigned int i = 0; i < input.size(); i++)
	{
		if (!isdigit(input[i]) && input[i] != '.' && input[i] != '-')
			return 2;
		else if (std::stod(input) > 1000 || std::stod(input) < 0)
			return 3;
	}
	return 0;
}
