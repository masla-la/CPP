#include "Inc/Serializer.hpp"
#include "Inc/Data.hpp"

int	main(int ac, char **av)
{
	Data	*a = new Data();

	a->setData("123");

	std::cout << "a: " <<  a << " -> " << a->getData() << std::endl;

	uintptr_t	d;
	d = Serializer::serialize(a);
	Data	*b = Serializer::deserialize(d);

	std::cout << "b: " << b << " -> " << b->getData() << std::endl;

	return 0;
}