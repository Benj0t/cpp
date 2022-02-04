#ifndef CLAPTRAP
# define CLAPTRAP

# include <string>
# include <cstring>
# include <iostream>
# include <fstream>

class ClapTrap
{
protected:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	unsigned int _attackDamage;
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
	virtual void setAttack(void) = 0;
	virtual void setHitPoints(void) = 0;
	virtual void setEnergy(void) = 0;

	std::string getName(void);
};
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

#endif