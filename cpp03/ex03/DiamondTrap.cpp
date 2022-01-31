#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Default_clap_name"), FragTrap(), ScavTrap()
{
    this->_hitPoints = FragTrap::_hitPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    this->_energyPoints = ScavTrap::_energyPoints;
    std::cout << "DiamondTrap default constructor called\n";
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

DiamondTrap::DiamondTrap(std::string nme) : ClapTrap(nme + "_clap_name"), ScavTrap(), FragTrap(), _name(nme)
{
    //this->_hitPoints = FragTrap::_hitPoints;
    //this->_energyPoints = ScavTrap::_energyPoints;
    //this->_attackDamage = FragTrap::_attackDamage;
    std::cerr << "DiamondTrap default constructor called\n" << _hitPoints << " " << _energyPoints << " " << _attackDamage << " ";

    std::cout << "DiamondTrap constructor called\n";
}

void    DiamondTrap::whoAmI(void)
{
    std::cout <<"Hey guys ! My name is " << this->_name <<" and my ClapTrap name is  "<< ClapTrap::_name << " !\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamonTrap destructor called\n";
}
