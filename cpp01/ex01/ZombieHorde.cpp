#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i;
	Zombie *zomb = new Zombie[N];

	i = 0;
	while (i < N)
	{
		zomb[i].setName(name);
		i++;
	}
	return (zomb);
}