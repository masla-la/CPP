#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::complain(std::string level)
{
	std::string	lvl[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;
	int			n;

	for (i = 0; i < 4; i++)
	{
		if (lvl[i] == level)
			break;
	}
	for(n = i;n < 4; n++)
	{
		switch (n)
		{
			case 0:
				debug();
				break;
		
			case 1:
				info();
				break;

			case 2:
				warning();
				break;

			case 3:
				error();
				break;
			default:
				other();
				break;
		}
	}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << std::endl;
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-picklespecial-ketchup burger. ";
	std::cout << "I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << "I’ve been coming for years whereas you started working here since last month.";
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << std::endl;
	std::cout << "This is unacceptable! ";
	std::cout << "I want to speak to the manager now." << std::endl;
}

void	Harl::other(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}