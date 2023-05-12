#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria is create." << std::endl;
}

AMateria::AMateria(std::string const & type): type(type)
{
	std::cout << "AMateria is create." << std::endl;
}

AMateria	&AMateria::operator=(AMateria const & obj)
{
	return (*this);
}

AMateria::~AMateria(void)
{
}

std::string const &AMateria::getType(void)const
{
	return (this->type);
}

void	AMateria::use(ICharacter &target)
{
}