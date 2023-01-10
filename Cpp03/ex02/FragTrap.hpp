#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"


class FragTrap: public ClapTrap
{
	private:
		std::string name;
		int			hp;
		int			eng;
		int			atk;

	public:
		FragTrap();
		FragTrap(std::string name);
		virtual ~FragTrap();

	void	highFivesGuys();
};


#endif
