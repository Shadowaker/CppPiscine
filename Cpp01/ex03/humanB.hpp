#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <iomanip>
# include <cstring>
# include "Weapon.hpp"

# define RED	"\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define MAGENTA "\033[95m"
# define BLANK "\033[0m"
# define RL_START "\1"
# define RL_END "\2"

class HumanB {
	private:
		Weapon		*weapon;
		std::string	name;

	public:
		HumanB(std::string name);
		~HumanB();

	void	attack();
	void	setWeapon(Weapon weapon);
};

#endif