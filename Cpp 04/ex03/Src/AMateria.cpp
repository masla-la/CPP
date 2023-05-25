#include "../Inc/AMateria.hpp"

AMateria::AMateria(void):  type("")
{
	std::cout << "AMateria is created" << std::endl;
}

AMateria::AMateria(std::string const & type): type(type)
{
	std::cout << "AMateria is created" << std::endl;
}

AMateria::AMateria(AMateria const &AMateria): type(AMateria.getType())
{
	std::cout << "AMateria is created" << std::endl;
}

AMateria	&AMateria::operator=(AMateria const & obj)
{
	this->type = obj.type;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria is destroy" << std::endl;
}

std::string const &AMateria::getType(void)const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
}
