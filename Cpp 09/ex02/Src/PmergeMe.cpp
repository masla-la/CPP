/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:09:28 by masla-la          #+#    #+#             */
/*   Updated: 2023/10/18 11:40:20 by masla-la         ###   ########.fr       */
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

Pmerge::Pmerge(char **av)
{
	for	(unsigned int i = 1; av[i]; i++)
	{
		for(unsigned int z = 0; av[i][z] && isdigit(av[i][z]); z++)
		{
			if (z == strlen(av[i]) - 1 && isdigit(av[i][z]))
				_vec.insert(_vec.begin(), atoi(av[i]));
			else if (z == strlen(av[i]) - 1 && !isdigit(av[i][z]))
			{
				_err = true;
				std::cout << "Error" << std::endl;
				return;
			}
		}
	}
	for (unsigned int i = 1; av[i]; i++)
		_deq.insert(_deq.begin(), atoi(av[i]));
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
	std::cout << "Time to process a range of " << _vec.size() << " elements with std::Vector : " << _vecTime << " us" << std::endl;//
	std::cout << "Time to process a range of " << _deq.size() << " elements with std::Deque : " << _deqTime << " us" << std::endl;//
}

void	Pmerge::vecMerge(int start, int mid, int end)
{
	int		l1 = mid - start + 1;
	int		r1 = end - mid;
	int		l2 = 0;
	int		r2 = 0;

	std::vector<int> l(_vec.begin() + start, _vec.begin() + mid + 1);
	std::vector<int> r(_vec.begin() + 1 + mid, _vec.begin() + end + 1);
	
	for (int i = start; i <= end; i++)
	{
		if (r2 == r1)
		{
			_vec[i] = l[l2];
			l2++;
		}
		else if (l2 == l1)
		{
			_vec[i] = r[r2];
			r2++;
		}
		else if (r[r2] > l[l2])
		{
			_vec[i] = l[l2];
			l2++;
		}
		else
		{
			_vec[i] = r[r2];
			r2++;
		}
	}
}

void	Pmerge::vecInsert(int start, int end)
{
	for(int i = start; i < end; i++)
	{
		int tmp = _vec[i + 1];
		int j = i + 1;
		while (j > start && _vec[j - 1] > tmp)
		{
			_vec[j] = _vec[j - 1];
			j--;
		}
		_vec[j] = tmp;
	}
}

void	Pmerge::shortVec(int start, int end)
{
	if (end - start > 5)
	{
		int mid = (start + end) / 2;
		shortVec(start, mid);
		shortVec(mid + 1, end);
		vecMerge(start, mid, end);
	}
	else
		vecInsert(start, end);
}

void	Pmerge::deqMerge(int start, int mid, int end)
{
	int	l1 = mid - start + 1;
	int	r1 = end - mid;
	int	l2 = 0;
	int	r2 = 0;

	std::deque<int>	l(_deq.begin() + start, _deq.begin() + mid + 1);
	std::deque<int>	r(_deq.begin() + mid + 1, _deq.begin() + end + 1);
	for(int i = start; i <= end ; i++)
	{
		if (r2 == r1)
		{
			_deq[i] = l[l2];
			l2++;
		}
		else if (l2 == l1)
		{
			_deq[i] = r[r2];
			r2++;
		}
		else if (r[r2] > l[l2])
		{
			_deq[i] = l[l2];
			l2++;
		}
		else
		{
			_deq[i] = r[r2];
			r2++;
		}
	}
}

void	Pmerge::deqInsert(int start, int end)
{
	for(int i = start; i < end; i++)
	{
		int	tmp = _deq[i + 1];
		int	j = i + 1;
		while(j > start && _deq[j - 1] > tmp)
		{
			_deq[j] = _deq[j - 1];
			j--;
		}
		_deq[j] = tmp;
	}
}

void	Pmerge::shortDeq(int start, int end)
{
	if (start - end > 5)
	{
		int	mid = (start + end) / 2;
		shortDeq(start, mid);
		shortDeq(mid + 1, end);
		deqMerge(start, mid, end);
	}
	else
		deqInsert(start, end);

}

void	Pmerge::shortAll(void)
{
	clock_t			time;

	time = std::clock();
	shortVec(0, _vec.size() - 1);
	_vecTime = std::clock() - time;
	time = std::clock();
	shortDeq(0, _deq.size() - 1);
	_deqTime = std::clock() - time;
}
