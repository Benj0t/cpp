#include "Character.hpp"

Character::Character():	inventory()
{
    this->name = "Undefined";
    std::cout << "Character default constructor called" << std::endl;
}


Character::Character(const Character &C): inventory()
{
	int i;

    i = 0;
    this->name = C.getName();
	while (i < 4)
	{
		if (inventory[i])
			delete inventory[i];
		inventory[i] = NULL;
		i++;
	}
	i = 0;
    while (i < 4)
	{
		if (C.inventory[i])
			inventory[i] = C.inventory[i]->clone();
		i++;
	}
	std::cout << "Character copy constructor called" << std::endl;	
}

Character::Character(std::string name) : inventory()
{
    this->name = name;
    std::cout << "Character constructor called" << std::endl;
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

Character& Character::operator=(const Character& ref)
{
	int i;

    i = 0;
    this->name = ref.name;
	while (i < 4)
	{
		if (inventory[i])
			delete inventory[i];
		inventory[i] = NULL;
		i++;
	}
	i = 0;
    while (i < 4)
	{
		if (ref.inventory[i])
			inventory[i] = ref.inventory[i]->clone();
		i++;
	}
	std::cout << "Character assignation copy constructor called" << std::endl;
    return *this;
}

Character::~Character()
{
	int i;

    i = 0;
    while (i < 4)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
		i++;
	}
	std::cout << "Character destructor called" << std::endl;
}