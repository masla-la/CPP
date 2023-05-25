#include "Inc/Dog.hpp"
#include "Inc/Cat.hpp"
#include "Inc/Animal.hpp"
#include "Inc/WrongAnimal.hpp"
#include "Inc/WrongCat.hpp"

int main(void)
{
	Cat	*C1 = new Cat();
	Cat *C2 = new Cat();

	C1->setIdea(1, "12213");
	std::cout << C1->getIdea(1) << std::endl;
	C2 = C1;
	std::cout << C2->getIdea(1) << std::endl;

	delete C1;
}