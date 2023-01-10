#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"


class ScavTrap: virtual public ClapTrap
{
	private:
		std::string name;
		int			hp;
		int			eng;
		int			atk;

	public:
		ScavTrap();
		ScavTrap(const ScavTrap &claptrap);
		ScavTrap(std::string name);
		virtual ~ScavTrap();

	ScavTrap& operator=(const ScavTrap &claptrap);

	void	attack(const std::string& target);
	void	guardGate();
};


#endif
