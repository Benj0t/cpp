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
    this->name = C.name;
	while (i < 4)
	{
		if (inventory[i])
			delete inventory[i];
		i++;
	}
	i = 0;
    while (i < 4)
		inventory[i] = C.inventory[i]->clone();
    std::cout << "AMateria copy constructor called" << std::endl;	
}

Character::Character(std::string name) : inventory()
{
    this->name = name;
    std::cout << "AMateria constructor called" << std::endl;
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
		i++;
	}
	i = 0;
    while (i < 4)
		inventory[i] = ref.inventory[i]->clone();
    std::cout << "AMateria assignation copy constructor called" << std::endl;
    return *this;
}

Character::~Character()
{
	int i;

    i = 0;
    while (i < 4)
		delete inventory[i++];
    std::cout << "AMateria destructor called" << std::endl;
}