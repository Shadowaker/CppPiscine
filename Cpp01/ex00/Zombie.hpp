
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

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

class Zombie {
	
	private:
		std::string	name;

	public:
		Zombie(std::string name);
		~Zombie();
	
	void		announce(void);

};
	
Zombie*		newZombie(std::string name);
void		randomChump(std::string name);

#endif