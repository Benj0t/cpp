#ifndef DIAMONDTRAP
# define DIAMONDTRAP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
    std::string _name;
public:
    DiamondTrap();
    void attack(std::string const & target);
    DiamondTrap(std::string nme);
	DiamondTrap(const DiamondTrap &frag);
    ~DiamondTrap();
	void    setAttack(void);
	void    setHitPoints(void);
	void    setEnergy(void);
    void    whoAmI(void);
	DiamondTrap& operator=(const DiamondTrap& scav);
};

#endif