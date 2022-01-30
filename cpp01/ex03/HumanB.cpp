#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL),  _name(name)
{
    this->_name = name;
}

void    HumanB::attack(void)  
{
    if (!this->_weapon)
        std::cout << this->_name << " attacks without weapon\n";
    else
        std::cout << this->_name << " attacks with his " << this->_weapon->getType() << '\n';
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}
