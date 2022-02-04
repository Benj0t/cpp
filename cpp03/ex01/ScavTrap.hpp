#ifndef SCAVTRAP
# define SCAVTRAP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap(std::string nme);
	ScavTrap(const ScavTrap &clap);
	ScavTrap(void);
	~ScavTrap();
	void attack(std::string const & target);
	void guardGate();
	ScavTrap& operator=(const ScavTrap& scav);
};

#endif