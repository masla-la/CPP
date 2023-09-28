/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:09:28 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/28 10:56:04 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/PmergeMe.hpp"

Pmerge::Pmerge(void)
{
}

Pmerge::Pmerge(Pmerge const &obj)
{
	_vec = obj._vec;
	_deq = obj._deq;
}

Pmerge::Pmerge(char *av)
{
	for	(unsigned int i = 0; av[i]; i++)
	{
		if (isdigit(av[i]))
			_vec.insert(_vec.begin(), av[i] - '0');
		else if (av[i] != ' ')
		{
			_err = true;
			std::cout << "Error" << std::endl;
			return;
		}
	}
	for (unsigned int i = 0; av[i]; i++)
	{
		if (isdigit(av[i]))
			_deq.insert(_deq.begin(), av[i] - '0');
	}
	_cpy = _vec;
}

Pmerge::~Pmerge(void)
{
}

Pmerge	&Pmerge::operator=(Pmerge const &obj)
{
	_vec = obj._vec;
	_deq = obj._deq;
	return *this;
}

void	Pmerge::printStacks(void)
{
	if (_err == true)
		return ;
	std::cout << "Before: ";
	for (unsigned int i = 0; i < _cpy.size(); i++)
		std::cout << " " << _cpy[i];
	std::cout << std::endl;
	std::cout << "After:" << std::endl;
	std::cout << "- Vector >>" << std::endl;
	for (unsigned int i = 0; i < _vec.size(); i++)
	{
		std::cout << " " << _vec.at(i);
	}
	std::cout << std::endl;
	std::cout << "- Deque >>" << std::endl;
	for (unsigned int i = 0; i < _deq.size(); i++)
	{
		std::cout << " " << _deq.at(i);;
	}
	std::cout << std::endl;
	std::cout << "Time to process a range of" << _vec.size() << " elements with std::Vector : " << _vecTime << " us" << std::endl;//
	std::cout << "Time to process a range of" << _deq.size() << " elements with std::Deque : " << _deqTime << " us" << std::endl;//
}

void	Pmerge::shortVec(void)
{
	unsigned int	b;
	clock_t			time;

	time = std::clock();
	for (unsigned int i = 0; i < _vec.size(); i++)
	{
		for (unsigned int n = 0; n < _vec.size(); n++)
		{
			if (_vec[i] < _vec[n])
			{
				b = _vec[i];
				_vec[i] = _vec[n];
				_vec[n] = b; 
			}
		}
	}
	_vecTime = std::clock() - time;
}

void	Pmerge::shortDeq(void)
{
	unsigned int	b;
	clock_t			time;

	time = std::clock();
	for (unsigned int i = 0; i < _deq.size(); i++)
	{
		for (unsigned int n = 0; n < _deq.size(); n++)
		{
			if (_deq[i] < _deq[n])
			{
				b = _deq[i];
				_deq[i] = _deq[n];
				_deq[n] = b;
			}
		}
	}
	_deqTime = std::clock() - time;
}
