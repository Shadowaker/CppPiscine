#include "ScavTrap.hpp"

void	defaultTester()
{
	ScavTrap x("Mr X"), y("Mr Y");
	int	i = 0;

	std::cout << GREEN "***** Default Tester *****" BLANK << std::endl;
	while (x.getHp() > 0 && y.getHp() && i < 5)
	{
		if (x.getEng() > 0 && x.getHp() > 0)
		{
			x.attack(y.getName());
			y.takeDamage(x.getAtk());
		}
		if (y.getEng() > 0 && y.getHp() > 0)
		{
			y.attack(x.getName());
			x.takeDamage(y.getAtk());
		}
		x.beRepaired(1);
		y.beRepaired(1);
		x.guardGate();
		y.guardGate();
		i++;
	}
}

int main()
{
	defaultTester();
}
