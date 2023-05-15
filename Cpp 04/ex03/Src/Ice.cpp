#include "../Inc/Ice.hpp"

Ice::Ice(void)
{
	type = "ice";
	std::cout << "Ice is create" << std::endl;
}

Ice::Ice(Ice const & Ice)
{
	*this = Ice;
	std::cout << "Ice is create" << std::endl;
}

Ice	&Ice::operator=(Ice const & obj)
{
	(void)obj;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice is destroy" << std::endl;
}

void	Ice::use(ICharacter & obj)
{
	std::cout << " shoots an ice bolt at " << obj.getName() << std::endl;
}

AMateria	*Ice::clone(void)const
{
	AMateria *tmp = new Ice(*this);
	return (tmp);
}
