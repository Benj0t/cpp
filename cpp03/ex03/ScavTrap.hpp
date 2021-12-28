#ifndef SCAVTRAP
# define SCAVTRAP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
protected:
	int const	defaultHitPoints = 100;
	int const	defaultEnergyPoints = 50;
	int const	defaultAttackDamage = 20;
public:
	ScavTrap(std::string nme);
	ScavTrap(void);
	~ScavTrap();
	void attack(std::string const & target);
	void guardGate();
};

#endif