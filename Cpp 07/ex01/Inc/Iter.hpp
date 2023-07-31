#ifndef _ITER_HPP_
# define _ITER_HPP_

# include <iostream>
# include <string>

template<typename T>
void	iter(T *addr, T len, T f())
{
	for (int i = 0; i < len; i++;)
		f(addr[i]);
}

#endif