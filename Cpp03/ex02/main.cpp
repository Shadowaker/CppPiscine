#include "FragTrap.hpp"

void	defaultTester()
{
	FragTrap x("Mr X"), y("Mr Y");
	int	i = 0;

	std::cout << std::endl << GREEN "***** Default Tester *****" BLANK << std::endl << std::endl;
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
		x.highFivesGuys();
		y.highFivesGuys();
		i++;
	}
	std::cout << std::endl << GREEN "***** ***** ***** *****" BLANK << std::endl << std::endl;
}

int main()
{
	defaultTester();
}
