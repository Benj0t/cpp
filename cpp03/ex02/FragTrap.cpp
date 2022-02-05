#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string nme): ClapTrap(nme)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap constructor called\n";
}

FragTrap::FragTrap() : ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap default constructor called\n";
}

FragTrap::FragTrap(const FragTrap &frag)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = frag;
}

void FragTrap::attack(std::string const & target)
{
    if (_energyPoints > 0 || _hitPoints == 0)
        _energyPoints -= 1;
    else
    {
        std::cout << "FragTrap " << this->_name << " has no more energy points or " << this->_name << " is dead" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->_name << " attack "<< target << " , causing " << this->_attackDamage << "points of damage!\n";
}

void    FragTrap::highFivesGuys(void)
{
    if (_energyPoints > 0 && _hitPoints != 0)
        _energyPoints -= 1;
    else
    {
        std::cout << "FragTrap " << this->_name << " has no more energy points or is dead" << std::endl;
        return ;
    }
    std::cout <<"FragTrap Hey guys ! Give me five !\n";
}

FragTrap& FragTrap::operator=(const FragTrap& frag)
{
    std::cout << "FragTrap Copy assignment operator called\n";
    this->_name = frag.getName();
    this->_attackDamage = frag.getAttackDamage();
    this->_energyPoints = frag.getEnergyPoints();
    this->_hitPoints = frag.getHitPoints();
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called\n";
}