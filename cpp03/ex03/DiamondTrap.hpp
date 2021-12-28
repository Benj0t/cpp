#ifndef DIAMONDTRAP
# define DIAMONDTRAP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
    std::string name;
public:
    DiamondTrap();
    void attack(std::string const & target);
    DiamondTrap(std::string nme);
    ~DiamondTrap();
    void    whoAmI(void);
};

#endif