
#include "Zombie.hpp"


int main()
{
	int	times = 3;

	std::cout << "Watchout! Zombies!" << std::endl;
	

	Zombie	*z = zombieHorde(times, "Culo");
	for (int x = 0; x < times; x++)
		(z + x)->announce();
	
	delete[] z;
}