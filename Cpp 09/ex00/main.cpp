#include "Inc/BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: Bad arguments" << std::endl;
		return 1;
	}
	BTC	btc;
	btc.proccessInput(av[1]);
	return 0;
}