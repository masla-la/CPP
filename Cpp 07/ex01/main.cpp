#include "Inc/Iter.hpp"

void	ft_add(int a)
{
	a++;
}

int	main()
{
	int	addr[5] = { 1, 2, 3, 4, 5 };
	int	len = 5;

	::iter(addr, len, ft_add);
	return 0;
}