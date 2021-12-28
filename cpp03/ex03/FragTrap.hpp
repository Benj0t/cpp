#ifndef FRAGTRAP
# define FRAGTRAP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
protected:
	int const	defaultHitPoints = 100;
	int const	defaultEnergyPoints = 100;
	int const	defaultAttackDamage = 30;
public:
    void    highFivesGuys(void);
	FragTrap(std::string nme);
    FragTrap(/* args */);
    ~FragTrap();
};


#endif