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
	std::cout << "I love having extra bacon for my "
		"7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money.\n"
		"You didn't put enough bacon in my burger!\nIf you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free.\n"
		"I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*complain[4])(void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int x = 0; x < 4; x++)
	{
		if (level == levels[x])
			(this->*complain[x])();
	}
}
