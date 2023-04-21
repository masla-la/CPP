#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*Z;
	int		i;

	i = 0;
	Z = new Zombie[N];
	while (i < N)
	{
		Z[i].set_name(name + std::to_string(i));
		i++;
	}
	return (&(Z[0]));
}
