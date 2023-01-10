
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "Unnamed";
	this->hp = 10;
	this->eng = 10;
	this->atk = 0;
	std::cout << BLUE "[ClapTrap] " BLANK << MAGENTA << this->name << BLANK << " borned." << std::endl;
}


ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	this->name = claptrap.name;
	this->hp = claptrap.hp;
	this->eng = claptrap.eng;
	this->atk = claptrap.atk;

	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	*this = claptrap;
	std::cout << BLUE "[ClapTrap] " BLANK << MAGENTA << this->name << BLANK << " copy borned." << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hp = 10;
	this->eng = 10;
	this->atk = 0;
	std::cout << BLUE "[ClapTrap] " BLANK << MAGENTA << this->name << BLANK << " appeared." << std::endl;
}


ClapTrap::~ClapTrap()
{
	std::cout << BLUE "[ClapTrap] " BLANK << MAGENTA << this->name << BLANK << " disappeared." << std::endl;;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->eng <= 0 || this->hp <= 0)
			return ;
	std::cout << BLUE "[ClapTrap] " BLANK << MAGENTA << this->name << BLANK << " attacks ";
	std::cout << target << " causing " << YELLOW << this->atk << BLANK << " points of damage." << std::endl;
	this->eng--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hp -= amount;
	std::cout << BLUE "[ClapTrap] " << MAGENTA << this->name << BLANK << " takes ";
	std::cout << RED << amount << BLANK << " points of damage." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->eng <= 0 || this->hp <= 0)
			return ;
	this->hp += amount;
	std::cout << BLUE "[ClapTrap] " << MAGENTA << this->name << BLANK << " repair itself from ";
	std::cout << GREEN << amount << BLANK << " points of damage." << std::endl;
}

int	ClapTrap::getHp()
{
	return this->hp;
}

int	ClapTrap::getEng()
{
	return this->eng;
}

int	ClapTrap::getAtk()
{
	return this->atk;
}

std::string	ClapTrap::getName()
{
	return this->name;
}

void	ClapTrap::setHp(int amount)
{
	this->hp = amount;
}

void	ClapTrap::setEng(int amount)
{
	this->eng = amount;
}

void	ClapTrap::setAtk(int amount)
{
	this->atk = amount;
}

void	ClapTrap::setName(std::string newname)
{
	this->name = newname;
}
