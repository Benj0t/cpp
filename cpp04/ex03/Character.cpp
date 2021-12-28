#include "Character.hpp"

Character::Character():	inventory()
{
    this->name = "Undefined";
}

Character::~Character()
{
	int i;

    i = 0;
    while (i < 4)
		delete inventory[i++];   
}

Character::Character(const Character &C): inventory()
{
	int i;

    i = 0;
    this->name = C.name;
    while (i < 4)
		inventory[i] = C.inventory[i]->clone();
}

Character::Character(std::string name) : inventory()
{
    this->name = name;
}

std::string const& Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* materia)
{
    int i = 0;

	if (!materia)
		return ;
	while (i < 4)
    {
		if (!inventory[i])
		{
			inventory[i] = materia;
			return ;
		}
        i++;
	}
}

void Character::unequip(int id)
{
	if (id < 0 || id > 3)
		return ;
	inventory[id] = NULL;
}

void Character::use(int id, ICharacter& target)
{
	if (id < 0 || id > 3 || !inventory[id])
		return ;
	inventory[id]->use(target);
}