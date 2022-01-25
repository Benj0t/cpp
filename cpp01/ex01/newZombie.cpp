#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string name )
{
    Zombie *zomb = new Zombie();

    zomb->_name = name;
    return (zomb);
}
