#ifndef _NUM_HPP_
# define _NUM_HPP_

# include <iostream>
# include <string>

template<typename T>
void	swap(T a, T b)
{
	T	c;
	c = a;
	a = b;
	b = c;
}

template<typename T>
T	min(T a, T b)
{
	if (a != b)
		return (a < b) ? a : b;
	return b;
}

template<typename T>
T	max(T a, T b)
{
	if (a != b)
		return (a > b) ? a : b;
	return  b;
}

#endif