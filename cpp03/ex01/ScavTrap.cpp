#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string nme): ClapTrap(nme)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap constructor called\n";
}

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap default constructor called\n";
}

void ScavTrap::attack(std::string const & target)
{
    if (_energyPoints > 0)
        _energyPoints -= 1;
    else
    {
        std::cout << "ScavTrap " << this->_name << " has no more energy points\n";
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " attack "<< target << ", causing " << this->_attackDamage << " points of damage!\n";
}

void ScavTrap::guardGate()
{
    if (_energyPoints > 0)
        _energyPoints -= 1;
    else
    {
        std::cout << "ScavTrap " << this->_name << " has no more energy points\n";
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " enters in Gate Keeper mode\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called\n";
}