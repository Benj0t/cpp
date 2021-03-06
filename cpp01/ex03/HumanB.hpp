#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <ctype.h>
# include <string>
# include "Weapon.hpp"

class HumanB
{
private:
    Weapon *_weapon;
	std::string _name;
public:
	void attack(void);
    HumanB(std::string name);
	void setWeapon(Weapon &weapon);
};

#endif
