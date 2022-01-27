#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string nme): ClapTrap(nme)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "FragTrap constructor called\n";
}

FragTrap::FragTrap() : ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap default constructor called\n";
}

void    FragTrap::highFivesGuys(void)
{
    std::cout <<"Hey guys ! Give me five !\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called\n";
}