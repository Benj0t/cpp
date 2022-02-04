#ifndef FRAGTRAP
# define FRAGTRAP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
    void    highFivesGuys(void);
	FragTrap(const FragTrap &frag);
	FragTrap(std::string nme);
    FragTrap();
	FragTrap& operator=(const FragTrap& scav);
    ~FragTrap();
};


#endif