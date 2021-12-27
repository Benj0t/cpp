#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string nme) : name(nme), weapon(NULL)
{
    this->name = nme;
}

void    HumanB::attack(void)  
{
    if (!this->weapon)
        std::cout << this->name << " attacks without weapon\n";
    else
        std::cout << this->name << " attacks with his " << this->weapon->getType() << '\n';
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
