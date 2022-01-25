#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"


void    Weapon::setType(std::string str)
{
	_type = str;
}

const std::string &Weapon::getType(void)
{
	return (this->_type);
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
}