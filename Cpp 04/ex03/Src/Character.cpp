#include "../Inc/Character.hpp"

Character::Character(void)
{
	for (int i = 0; i < 4; i++)
		Inventory[i] = NULL;
	for (int i = 0; i < 20; i++)
		Floor[i] = NULL;
	name = "Default";
	std::cout << "Character is created" << std::endl;
}

Character::Character(std::string name)
{
	for (int i = 0; i < 4; i++)
		Inventory[i] = NULL;
	for (int i = 0; i < 20; i++)
		Floor[i] = NULL;
	this->name = name;
	std::cout << "Character " << name <<  " is created" << std::endl;
}

Character::Character(Character const &Character)
{
	name = Character.name;
	for (int i = 0; i < 4; i++)
		Inventory[i] = NULL;
	for (int i = 0; i < 20; i++)
		Floor[i] = NULL;
	for (int i = 0; i < 4; i++)
		if (Character.Inventory[i])
			Inventory[i] = Character.Inventory[i]->clone();
	std::cout << "Character " << name <<  " is create" << std::endl;
}

Character &Character::operator=(Character const &obj)
{
	name = obj.getName();
	for (int i = 0; i < 4; i++)
		if (Inventory[i])
			delete Inventory[i];
	for (int i = 0; i < 4; i++)
		if (obj.Inventory[i])
			Inventory[i] = obj.Inventory[i]->clone();
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (Inventory[i])
			delete Inventory[i];
	for (int i = 0; i < 20; i++)
		if (Floor[i])
			delete Floor[i];
	std::cout << "Character is destroy" << std::endl;
}

std::string	const &Character::getName(void)const
{
	return (name);
}

void	Character::equip(AMateria *m)
{
	int	i;
	for (i = 0; i < 5 && Inventory[i]; i++);
	if (i == 4)
		std::cout << getName() << " can´t equip" << m->getType() << std::endl;
	else
		Inventory[i] = m;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "Incorrect index" << std::endl;
	else if (Inventory[idx])
	{
		for (int i = 0; i < 21; i++)
		{
			if (i == 20)
			{
				std::cout << "Floor is full" << std::endl;
				return ;
			}
			if (!Floor[i])
				Floor[i] = Inventory[idx];
		}
		Inventory[idx] = NULL;
	}
	else
		std::cout << "This items don´t exist" << std::endl;
}

void	Character::use(int idx, ICharacter & target)
{
	if (idx < 0 || idx > 3 || !Inventory[idx])
		std::cout << "Incorrect index" << std::endl;
	else
	{
		std::cout << getName() << ": ";
		Inventory[idx]->use(target);
		delete Inventory[idx];
		Inventory[idx] = NULL;
	}
}
