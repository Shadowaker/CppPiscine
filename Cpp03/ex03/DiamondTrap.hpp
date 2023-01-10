#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"


class DiamondTrap: virtual public ScavTrap, virtual public FragTrap
{
	private:
		std::string name;
		int			hp;
		int			eng;
		int			atk;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		virtual ~DiamondTrap();

	void	WhoAmI();
	void	attack(const std::string& target);

};


#endif
