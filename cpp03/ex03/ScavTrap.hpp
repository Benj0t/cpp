#ifndef SCAVTRAP
# define SCAVTRAP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
	ScavTrap(std::string nme);
	ScavTrap(const ScavTrap &clap);
	ScavTrap(void);
	~ScavTrap();
	void attack(std::string const & target);
	void guardGate();
	void setAttack(void);
	void setHitPoints(void);
	void setEnergy(void);
	ScavTrap& operator=(const ScavTrap& scav);
};

#endif