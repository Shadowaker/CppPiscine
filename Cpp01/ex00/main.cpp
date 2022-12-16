

#include "Zombie.hpp"


int main()
{
	std::cout << "Watchout! Zombies!" << std::endl;
	
	for (int x = 0; x < 5; x++)
	{
		std::cout << x << " ";
		randomChump("Culo");
	}
}