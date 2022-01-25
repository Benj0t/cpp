#include "HumanA.hpp"

HumanA::HumanA(std::string nme, Weapon &wpon) : _name(nme), _weapon(wpon)
{
}

void    HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << _weapon.getType() << '\n';
}

void    HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}