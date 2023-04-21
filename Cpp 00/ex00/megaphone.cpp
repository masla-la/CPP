#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	n;

	i = 1;
	if (ac < 2)
		std::cout << "Error";
	else
	{
		while (av[i])
		{
			n = 0;
			while (av[i][n])
			{
				av[i][n] = std::toupper(av[i][n]);
				std::cout << av[i][n];
				n++;
			}
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}