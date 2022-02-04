#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Default_clap_name"), FragTrap(), ScavTrap()
{
    setHitPoints();
    setEnergy();
    setAttack();
    std::cout << "DiamondTrap default constructor called\n";
    std::cerr << "DiamondTrap default constructor called\n" << this->_hitPoints << " " << this->_energyPoints << " " << this->_attackDamage << " ";

}

DiamondTrap::DiamondTrap(std::string nme) : ClapTrap(nme + "_clap_name"), _name(nme), ScavTrap(), FragTrap()
{
    setHitPoints();
    setEnergy();
    setAttack();
    std::cerr << "DiamondTrap default constructor called\n" << this->_hitPoints << " " << this->_energyPoints << " " << this->_attackDamage << " ";
    std::cout << "DiamondTrap constructor called\n";
}

void DiamondTrap::attack(std::string const & target)
{
    if (_energyPoints > 0)
        _energyPoints -= 1;
    else
    {
        std::cout << "DiamondTrap " << this->_name << " has no more energy points\n";
        return ;
    }
    std::cout << "DiamondTrap " << this->_name << " attack "<< target << ", causing " << this->_attackDamage << "points of damage!\n";
}

void    DiamondTrap::setAttack()
{
    FragTrap::setAttack();
}
void    DiamondTrap::setEnergy()
{
    ScavTrap::setEnergy();
}
void    DiamondTrap::setHitPoints()
{
    FragTrap::setHitPoints();
}


void    DiamondTrap::whoAmI(void)
{
    std::cout <<"Hey guys ! My name is " << this->_name <<" and my ClapTrap name is  "<< ClapTrap::_name << " !\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamonTrap destructor called\n";
}
