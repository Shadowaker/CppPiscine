#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->name = this->getName();
	this->hp = 100;
	this->eng = 50;
	this->atk = 20;
	this->setAtk(this->atk);
	this->setEng(this->eng);
	this->setHp(this->hp);

	std::cout << GREEN "[ScavTrap] " << MAGENTA << this->name << BLANK << " appeared." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hp = 100;
	this->eng = 50;
	this->atk = 20;
	this->setName(this->name);
	this->setAtk(this->atk);
	this->setEng(this->eng);
	this->setHp(this->hp);

	std::cout << GREEN "[ScavTrap] " << MAGENTA << this->name << BLANK << " appeared." << std::endl;
}


ScavTrap::~ScavTrap()
{
	std::cout << GREEN "[ScavTrap] " << MAGENTA << this->name << BLANK << " disappeared." << std::endl;;
}

void	ScavTrap::guardGate()
{
	std::cout << GREEN "[ScavTrap] " << MAGENTA << this->name << BLANK << " is now in Gate keeper mode." << std::endl;;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->eng <= 0 || this->hp <= 0)
			return ;
	std::cout << BLUE "[ScavTrap] " BLANK << MAGENTA << this->name << BLANK << " spits ";
	std::cout << target << " causing " << YELLOW << this->atk << BLANK << " points of damage." << std::endl;
	this->eng--;
}
