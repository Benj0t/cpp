#ifndef SCAVTRAP
# define SCAVTRAP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
	ScavTrap(std::string nme);
	ScavTrap(void);
	~ScavTrap();
	void attack(std::string const & target);
	void guardGate();
};

#endif