#include "Harl.hpp"

Harl::Harl()
{
	;
}

Harl::~Harl()
{
	;
}

void	Harl::debug(void)
{
	std::cout << BLUE "[DEBUG]\nI love having extra bacon for my "
		"7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" BLANK << std::endl;
}

void	Harl::info(void)
{
	std::cout << GREEN "[INFO]\nI cannot believe adding extra bacon costs more money.\n"
		"You didn't put enough bacon in my burger!\nIf you did, I wouldn't be asking for more!" BLANK << std::endl;
}

void	Harl::warning(void)
{
	std::cout << YELLOW "[WARNING]\nI think I deserve to have some extra bacon for free.\n"
		"I've been coming for years whereas you started working here since last month." BLANK << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED "[ERROR]\nThis is unacceptable! I want to speak to the manager now." BLANK << std::endl;
}

void	Harl::switcheroni(int i)
{
	void	(Harl::*complain[4])(void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int x = i; x < 4; x++)
	{
		(this->*complain[x])();
	}
}

void	Harl::complain(std::string level)
{
	int	expr;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};


	for (int x = 0; x < 4; x++)
	{
		if (level == levels[x])
			{
				expr = x;
				break ;
			}
	}
	switch (expr)
	{
	case 0:
		this->switcheroni(0);
		break;
	case 1:
		this->switcheroni(1);
		break;
	case 2:
		this->switcheroni(2);
		break;
	case 3:
		this->switcheroni(3);
		break;
	default:
		break;
	}
}
