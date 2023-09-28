#include "Inc/BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		std::cout << "Error: Bad arguments" << std::endl;
		return 1;
	}
	BTC	btc;
	btc.setData(av[2]);
	btc.proccessInput(av[1]);
	return 0;
}