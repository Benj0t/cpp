#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string nme) : _name(nme), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap Constructor called\n";
}

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap Default constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = clap;
}

void ClapTrap::attack(std::string const & target)
{
    if (_energyPoints > 0 && _hitPoints != 0)
        _energyPoints -= 1;
    else
    {
        std::cout << "ClapTrap " << this->_name << " has no more energy points or " << this->_name << " is dead" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " attack "<< target << ", causing " << this->_attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints < amount)
    {
        this->_hitPoints = 0;
    }
    else
    {
        this->_hitPoints -= amount;
    }
    std::cout << "ClapTrap " << this->_name << " takes "<< amount << " points of damage, " << this->_hitPoints << " hit points left\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints != 0)
        _energyPoints -= 1;
    else
    {
        std::cout << "ClapTrap " << this->_name << " has no more energy points or " << this->_name << " is dead" << std::endl;
        return ;
    }
    this->_hitPoints += amount;
    std::cout << "ClapTrap " << this->_name << " heals "<< amount << " hit points, now has " << this->_hitPoints << " hit points\n";
}

int ClapTrap::getAttackDamage(void) const
{
    return (this->_attackDamage);
}

int ClapTrap::getHitPoints(void) const
{
    return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints(void) const
{
    return (this->_energyPoints);
}

std::string ClapTrap::getName(void) const
{
    return this->_name;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clap)
{
    std::cout << "ClapTrap Copy assignment operator called\n";
    this->_name = clap.getName();
    this->_attackDamage = clap.getAttackDamage();
    this->_energyPoints = clap.getEnergyPoints();
    this->_hitPoints = clap.getHitPoints();
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called\n";
}