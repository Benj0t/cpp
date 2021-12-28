#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string nme): ClapTrap(nme)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "FragTrap constructor called\n";
}

FragTrap::FragTrap() : ClapTrap()
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
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