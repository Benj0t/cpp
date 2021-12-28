#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string nme): ClapTrap(nme)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap constructor called\n";
}

ScavTrap::ScavTrap() : ClapTrap()
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap default constructor called\n";
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap " << this->name << " attack "<< target << " , causing " << this->attackDamage << "points of damage!\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " entered in Gate Keeper mode\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called\n";
}