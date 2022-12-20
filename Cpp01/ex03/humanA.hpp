#ifndef HUMANA_HPP
# define HUMANA_HPP

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

class HumanA {
	private:
		Weapon		*weapon;
		std::string	name;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

	void	attack();
	void	setWeapon(Weapon &weapon);
};

#endif