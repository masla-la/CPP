#include "../Inc/MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		MateriaCopy[i] = NULL;
	std::cout << "MateriaSource is created" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & MateriaSource)
{
	for (int i = 0; i < 4; i++)
		MateriaCopy[i] = NULL;
	for (int i = 0; i < 4; i++)
		if (MateriaSource.MateriaCopy[i])
			MateriaCopy[i] = MateriaSource.MateriaCopy[i]->clone();
	std::cout << "MateriaSource is created" << std::endl;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const & obj)
{
	for (int i = 0; i < 4; i++)
		if (obj.MateriaCopy[i])
			MateriaCopy[i] = obj.MateriaCopy[i]->clone();
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		if (MateriaCopy[i])
			delete MateriaCopy[i];
	std::cout << "MateriaSource is destroy" << std::endl;
}

void	MateriaSource::learnMateria(AMateria *obj)
{
	for (int i = 0; i < 5; i++)
	{
		if (i == 5)
		{
			std::cout << "Can´t add" << obj->getType() << "to MateriaSoruce" << std::endl;
			return ;
		}
		if (!MateriaCopy[i])
		{
			MateriaCopy[i] = obj;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria( std::string const &type)
{
	for (int i = 3; i > -1; i--)
		if (MateriaCopy[i] && MateriaCopy[i]->getType() == type)
		{
			std::cout << "Materia " << type << " is created" << std::endl;
			return (MateriaCopy[i]->clone());
		}
	std::cout << "Can´t create: " << type << std::endl;
	return (0);

}
