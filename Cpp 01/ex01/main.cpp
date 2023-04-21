#include "Zombie.hpp"

int	main(void)
{
	int	N = 8;
	Zombie	*zm;

	zm = zombieHorde(N, "Zm");
	while (N > 0)
	{
		zm[N - 1].announce();
		N--;
	}
	delete [] zm;
	return (0);
}