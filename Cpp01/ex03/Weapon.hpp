#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <iomanip>
# include <cstring>

# define RED	"\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define MAGENTA "\033[95m"
# define BLANK "\033[0m"
# define RL_START "\1"
# define RL_END "\2"

class Weapon {
	private:
		std::string	type;

	public:
		Weapon(std::string type);
		~Weapon();
	
	const std::string	&getType();
	void				setType(std::string newType);
};

#endif