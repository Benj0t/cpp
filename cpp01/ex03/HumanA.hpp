#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <ctype.h>
# include <string>
# include "Weapon.hpp"

class HumanA
{
private:
    Weapon &weapon;
	std::string name;
public:
	void attack(void);
	HumanA(std::string nme, Weapon &wpon);
	void setWeapon(Weapon weapon);
};

#endif