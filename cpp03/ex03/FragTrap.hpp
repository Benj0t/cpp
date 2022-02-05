#ifndef FRAGTRAP
# define FRAGTRAP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
    void    highFivesGuys(void);
    FragTrap(std::string nme);
	FragTrap(const FragTrap &frag);
    FragTrap();
    ~FragTrap();
	void attack(std::string const & target);
	void setAttack(void);
	void setHitPoints(void);
	void setEnergy(void);
	FragTrap& operator=(const FragTrap& scav);
};


#endif