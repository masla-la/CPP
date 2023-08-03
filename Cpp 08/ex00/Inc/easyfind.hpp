#ifndef _EASYFIND_HPP_
# define _EASYFIND_HPP_

# include <iostream>
# include <array>

template<typename T>
bool	easyfind(T &t, int cmp)
{
	for (unsigned int i = 0; t[i]; i++)
		if (t[i] == cmp)
			return true;
	return false;
}

#endif
