#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Default_clap_name"), FragTrap(), ScavTrap()
{
    this->hitPoints = FragTrap::defaultHitPoints;
    this->energyPoints = ScavTrap::defaultEnergyPoints;
    this->attackDamage = FragTrap::defaultAttackDamage;
    std::cout << "DiamondTrap default constructor called\n";
}

void DiamondTrap::attack(std::string const & target)
{
    std::cout << "DiamondTrap " << this->name << " attack "<< target << " , causing " << this->attackDamage << "points of damage!\n";
}

DiamondTrap::DiamondTrap(std::string nme) : ClapTrap(nme + "_clap_name"), FragTrap(), ScavTrap(), name(nme)
{
    this->hitPoints = FragTrap::defaultHitPoints;
    this->energyPoints = ScavTrap::defaultEnergyPoints;
    this->attackDamage = FragTrap::defaultAttackDamage;
    std::cout << "DiamondTrap constructor called\n";
}

void    DiamondTrap::whoAmI(void)
{
    std::cout <<"Hey guys ! My name is " << this->name <<" and my ClapTrap name is  "<< ClapTrap::name << " !\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamonTrap destructor called\n";
}
