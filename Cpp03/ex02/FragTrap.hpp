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
		FragTrap(const FragTrap &claptrap);
		FragTrap(std::string name);
		virtual ~FragTrap();

	FragTrap& operator=(const FragTrap &claptrap);

	void	highFivesGuys();
};


#endif
