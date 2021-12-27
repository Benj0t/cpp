#include "HumanA.hpp"

HumanA::HumanA(std::string nme, Weapon &wpon) : name(nme), weapon(wpon)
{
}

void    HumanA::attack(void)
{
	std::cout << name << " attacks with his " << weapon.getType() << '\n';
}

void    HumanA::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}