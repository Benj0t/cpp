#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	std::cout << _name << " is dead\n";
}