#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <iomanip>
# include <cstring>
# include <fstream>

# define RED	"\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define MAGENTA "\033[95m"
# define BLANK "\033[0m"
# define RL_START "\1"
# define RL_END "\2"

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	switcheroni(int i);

	public:
		Harl();
		~Harl();

	void	complain(std::string level);
};

#endif
