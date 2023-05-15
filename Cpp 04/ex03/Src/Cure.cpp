#include "../Inc/Cure.hpp"

Cure::Cure(void)
{
	type = "cure";
	std::cout << "Cure is create" << std::endl;
}

Cure::Cure(Cure const & Cure)
{
	*this = Cure;
	std::cout << "Cure is create" << std::endl;
}

Cure	&Cure::operator=(Cure const & obj)
{
	(void)obj;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure is destroy" << std::endl;
}

void	Cure::use(ICharacter & obj)
{
	std::cout << "heals " << obj.getName() << "’s wounds" << std::endl;
}

AMateria	*Cure::clone(void)const
{
	AMateria *tmp = new Cure(*this);
	return (tmp);
}

