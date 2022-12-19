
#include "Zombie.hpp"

Zombie* 	zombieHorde(int N, std::string name)
{
	Zombie	*zombies;

	zombies = new Zombie[N];
	if (N < 0)
		return (NULL);
	for	(int x = 0; x < N; x++)
		zombies[x].setName(name);
	return (zombies);
}
