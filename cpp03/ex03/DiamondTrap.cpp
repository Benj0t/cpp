#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Default_clap_name"), FragTrap(), ScavTrap()
{
    setHitPoints();
    setEnergy();
    setAttack();
    std::cout << "DiamondTrap default constructor called\n";
    std::cerr << "DiamondTrap default constructor called\n" << this->_hitPoints << " " << this->_energyPoints << " " << this->_attackDamage << " ";

}

DiamondTrap::DiamondTrap(std::string nme) : ClapTrap(nme + "_clap_name"), FragTrap(), ScavTrap(), _name(nme)
{
    setHitPoints();
    setEnergy();
    setAttack();
    std::cerr << "DiamondTrap default constructor called\n" << this->_hitPoints << " " << this->_energyPoints << " " << this->_attackDamage << " ";
    std::cout << "DiamondTrap constructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &frag)
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    *this = frag;
}

void DiamondTrap::attack(std::string const & target)
{
    if (_energyPoints > 0 && _hitPoints != 0)
        _energyPoints -= 1;
    else
    {
        std::cout << "DiamondTrap " << this->_name << " has no more energy points or " << this->_name << " is dead" << std::endl;

        return ;
    }
    std::cout << "DiamondTrap " << this->_name << " attack "<< target << ", causing " << this->_attackDamage << "points of damage!\n";
}

void    DiamondTrap::setAttack()
{
    FragTrap::setAttack();
}
void    DiamondTrap::setEnergy()
{
    ScavTrap::setEnergy();
}
void    DiamondTrap::setHitPoints()
{
    FragTrap::setHitPoints();
}

void    DiamondTrap::whoAmI(void)
{
    std::cout <<"Hey guys ! My name is " << this->_name <<" and my ClapTrap name is  "<< ClapTrap::_name << " !\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diam)
{
    std::cout << "DiamondTrap Copy assignment operator called\n";
    this->_name = diam.getName();
    this->_attackDamage = diam.getAttackDamage();
    this->_energyPoints = diam.getEnergyPoints();
    this->_hitPoints = diam.getHitPoints();
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamonTrap destructor called\n";
}
