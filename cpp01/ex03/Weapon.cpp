#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"


void    Weapon::setType(std::string str)
{
	type = str;
}

const std::string &Weapon::getType(void)
{
	return (this->type);
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}