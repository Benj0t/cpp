#ifndef FRAGTRAP
# define FRAGTRAP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
    void    highFivesGuys(void);
    FragTrap(std::string nme);
    FragTrap(/* args */);
    ~FragTrap();
	void setAttack(void);
	void setHitPoints(void);
	void setEnergy(void);
};


#endif