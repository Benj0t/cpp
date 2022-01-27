#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string nme) : _name(nme), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Constructor called\n";
}

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor called\n";
}

void ClapTrap::attack(std::string const & target)
{
    if (_energyPoints > 0)
        _energyPoints -= 1;
    else
    {
        std::cout << "ClapTrap " << this->_name << " has no more energy points\n";
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " attack "<< target << " , causing " << this->_attackDamage << "points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_energyPoints - amount <= 0)
    {
        this->_energyPoints = 0;
    }
    else
    {
        this->_energyPoints -= amount;
        std::cout << "ClapTrap " << this->_name << " takes "<< amount << " points of damage, " << this->_energyPoints << "energy points left\n";
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0)
        _energyPoints -= 1;
    else
    {
        std::cout << "ClapTrap " << this->_name << " has no more energy points\n";
        return ;
    }
    this->_energyPoints += amount;
    std::cout << "ClapTrap " << this->_name << " heals "<< amount << " energy points, now has " << this->_energyPoints << "energy points\n";
}

int ClapTrap::getAttackDamage(void)
{
    return (this->_attackDamage);
}

int ClapTrap::getHitPoints(void)
{
    return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints(void)
{
    return (this->_energyPoints);
}

std::string ClapTrap::getName(void)
{
    return this->_name;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called\n";
}