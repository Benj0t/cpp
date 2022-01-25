#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << '<' << this->_name << '>'
			  << " BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	std::cout << '<' << _name << '>'
		  << "is dead\n";
}