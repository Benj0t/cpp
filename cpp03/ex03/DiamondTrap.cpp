#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Default_clap_name"), FragTrap(), ScavTrap(), _name("Default")
{
    setHitPoints();
    setEnergy();
    setAttack();
    std::cout << "DiamondTrap default constructor called\n";
}

DiamondTrap::DiamondTrap(std::string nme) : ClapTrap(nme + "_clap_name"), FragTrap(), ScavTrap(), _name(nme)
{
    setHitPoints();
    setEnergy();
    setAttack();
    std::cout << "DiamondTrap constructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &frag)
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    *this = frag;
}

void DiamondTrap::attack(std::string const & target)
{
    this->ScavTrap::attack(target);
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
    if (_energyPoints > 0 && _hitPoints != 0)
        _energyPoints -= 1;
    else
    {
        std::cout << "DiamondTrap " << this->_name << " has no more energy points or " << this->_name << " is dead" << std::endl;
        return ;
    }
    std::cout <<"DiamondTrap Hey guys ! My name is " << this->_name <<" and my ClapTrap name is  "<< ClapTrap::_name << " !\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diam)
{
    std::cout << "DiamondTrap Copy assignment operator called\n";
    this->_name = diam.getName();
    this->_attackDamage = diam.getAttackDamage();
    this->_energyPoints = diam.getEnergyPoints();
    this->_hitPoints = diam.getHitPoints();
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called\n";
}
