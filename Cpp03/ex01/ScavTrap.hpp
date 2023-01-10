#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"


class ScavTrap: public ClapTrap
{
	private:
		std::string name;
		int			hp;
		int			eng;
		int			atk;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		virtual ~ScavTrap();

	void	attack(const std::string& target);
	void	guardGate();
};


#endif
