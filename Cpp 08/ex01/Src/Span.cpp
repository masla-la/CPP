/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:51:45 by masla-la          #+#    #+#             */
/*   Updated: 2023/10/13 10:04:03 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/Span.hpp"

Span::Span(void)
{
	_n = std::vector<int>();
	_size = 0;
}

Span::Span(unsigned int n)
{
	if (n < 1)
		throw	SizeOverflowException();
	_size = n;
}

Span::Span(Span const & obj)
{
	_n = std::vector<int>(obj._size);
	_size = obj._size;
}

Span::~Span(void)
{
}

Span	&Span::operator=(Span const & obj)
{
	_n = obj._n;
	_size = obj._size;
	return *this;
}

void	Span::addNumber(unsigned int num)
{
	if (_size < 1 || _n.size() == _size)
		throw	SizeOverflowException();
	_n.insert(_n.begin(), num);
}

void	Span::addNumber(unsigned int n, unsigned int rang, unsigned int rang2)
{
	if (rang < 0 || rang2 < 0 || rang > rang2)
		throw	WrongRangException();
	srand((unsigned)time(NULL));
	for (unsigned int z = 0; z < n; z++)
		addNumber(rang + rand() % (rang2 - rang));
}

/*unsigned int	Span::shorterSpan(void)
{
	if (_n.size() < 2)
		throw	ShorterException();
	
	unsigned int	num;

	num = *max_element(_n.begin(), _n.end());
	for (int i = 0; i < _n.size(); i++)
	{
		for (int n = 0; n < _n.size(); n++)
		{
			if (_n[i] - _n[n] < num && _n[i] > _n[n])
				num = _n[i] - _n[n];
			if (_n[n] - _n[i] < num && _n[i] < _n[n])
				num = _n[n] - _n[i];
		}
	}
	return (num);
}*/

unsigned int	Span::shorterSpan(void)
{
	if (_n.size() < 2)
		throw	ShorterException();

	std::vector<int>	cpy = _n;

	std::sort(cpy.begin(), cpy.end());
	
	std::vector<int>::iterator	tmp;
	unsigned int i = *(cpy.begin() + 1) - *cpy.begin();

	for (tmp = (cpy.begin() + 1); tmp != cpy.end(); tmp++)
	{
		if (i > *(tmp + 1) - *tmp)
			i = *(tmp + 1) - *tmp;
	}
	return (i);
}

unsigned int	Span::longestSpan(void)
{
	if (_n.size() < 2)
		throw	LongestException();
	unsigned int	num;
	num = *max_element(_n.begin(), _n.end()) - *min_element(_n.begin(), _n.end());
	return num;
}

unsigned int	Span::operator[](unsigned int i)
{
	if (i > _n.size() || i < 0)
		throw	SizeOverflowException();
	return _n[i];
}

const char	*Span::SizeOverflowException::what(void)const throw()
{
	return "Size overflow";
}

const char	*Span::ShorterException::what(void)const throw()
{
	return "Shorter Error";
}

const char	*Span::LongestException::what(void)const throw()
{
	return "Longest Error";
}

const char	*Span::WrongRangException::what(void)const throw()
{
	return	"Wrong Range Error";
}
