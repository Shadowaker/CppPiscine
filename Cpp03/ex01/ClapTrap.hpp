#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define RED	"\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define MAGENTA "\033[95m"
# define BLANK "\033[0m"
# define RL_START "\1"
# define RL_END "\2"

class ClapTrap
{
	private:
		std::string name;
		int			hp;
		int			eng;
		int			atk;

	public:
		ClapTrap();
		ClapTrap(const ClapTrap &claptrap);
		ClapTrap(std::string name);
		virtual ~ClapTrap();

	ClapTrap& operator=(const ClapTrap &claptrap);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string	getName();
	int			getHp();
	int			getEng();
	int			getAtk();

	void		setName(std::string newname);
	void		setHp(int amount);
	void		setEng(int amount);
	void		setAtk(int amount);
};

#endif
