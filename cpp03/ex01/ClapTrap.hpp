#ifndef CLAPTRAP
# define CLAPTRAP

# include <string>
# include <cstring>
# include <iostream>
# include <fstream>

class ClapTrap
{
protected:
	std::string name;
	int hitPoints;
	int energyPoints;
	unsigned int attackDamage;
public:
	ClapTrap(std::string nme);
	ClapTrap();
	~ClapTrap();
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	int getAttackDamage(void);
	int getHitPoints(void);
	int getEnergyPoints(void);
	std::string getName(void);
};
# include "ScavTrap.hpp"

#endif