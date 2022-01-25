#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	int i;
	Zombie *zomb = new Zombie[N];

	i = 0;
	while (i < N)
	{
		zomb[i]._name = (name + " #" + std::to_string(i + 1));
		i++;
	}
	return (zomb);
}