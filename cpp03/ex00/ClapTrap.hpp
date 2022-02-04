#ifndef CLAPTRAP
# define CLAPTRAP

# include <string>
# include <cstring>
# include <iostream>
# include <fstream>

class ClapTrap
{
private:
	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;
public:
	ClapTrap(std::string nme);
	ClapTrap(const ClapTrap &clap);
	ClapTrap();
	~ClapTrap();
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	int getAttackDamage(void) const;
	int getHitPoints(void) const;
	int getEnergyPoints(void) const;
	std::string getName(void) const;
	ClapTrap& operator=(const ClapTrap& clap);
};

#endif