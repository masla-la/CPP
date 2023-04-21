#include "Zombie.hpp"

int	main(void)
{
	std::cout << ">>Stack<<" << std::endl;
	Zombie	stack("Foo");
	Zombie	stack2;

	
	randomChump("randomC");
	stack.announce();
	stack2.announce();

	std::cout << ">>Head<<" << std::endl;
	Zombie	*head;
	head = newZombie("Zoo");
	head->announce();
	delete head;
	return (0);
}
