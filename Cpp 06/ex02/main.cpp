#include "Inc/Base.hpp"

int	main()
{
	Base *p = generate();
	identify(p);
	identify(*p);
	return 0;
}