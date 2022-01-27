#ifndef FRAGTRAP
# define FRAGTRAP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
    void    highFivesGuys(void);
	FragTrap(std::string nme);
    FragTrap(/* args */);
    ~FragTrap();
};


#endif