#include "Inc/Dog.hpp"
#include "Inc/Cat.hpp"
#include "Inc/Animal.hpp"
#include "Inc/WrongAnimal.hpp"
#include "Inc/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal	*WA = new WrongAnimal;
	const WrongCat		*WC = new WrongCat;

	WA->makeSound();
	WC->makeSound();

	delete meta;
	delete j;
	delete i;
	delete WA;
	delete WC;
	return 0;
}