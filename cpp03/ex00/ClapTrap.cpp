#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string nme) : name(nme), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Constructor called\n";
}

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Default constructor called\n";
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << this->name << " attack "<< target << " , causing " << this->attackDamage << "points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->energyPoints - amount <= 0)
    {
        this->energyPoints = 0;
    }
    else
    {
        this->energyPoints -= amount;
        std::cout << "ClapTrap " << this->name << " takes "<< amount << " points of damage, " << this->energyPoints << "energy points left\n";
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->energyPoints += amount;
    std::cout << "ClapTrap " << this->name << " heals "<< amount << " energy points, now has " << this->energyPoints << "energy points\n";
}

int ClapTrap::getAttackDamage(void)
{
    return (this->attackDamage);
}
int ClapTrap::getHitPoints(void)
{
    return (this->hitPoints);
}

int ClapTrap::getEnergyPoints(void)
{
    return (this->energyPoints);
}

std::string ClapTrap::getName(void)
{
    return this->name;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called\n";
}