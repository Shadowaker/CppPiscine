#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->name = this->getName();
	this->hp = 100;
	this->eng = 100;
	this->atk = 30;
	this->setAtk(this->atk);
	this->setEng(this->eng);
	this->setHp(this->hp);

	std::cout << MAGENTA "[FragTrap] " << MAGENTA << this->name << BLANK << " wants to fight." << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hp = 100;
	this->eng = 100;
	this->atk = 30;
	this->setName(this->name);
	this->setAtk(this->atk);
	this->setEng(this->eng);
	this->setHp(this->hp);

	std::cout << MAGENTA "[FragTrap] " << MAGENTA << this->name << BLANK << " wants to fight." << std::endl;
}


FragTrap::~FragTrap()
{
	std::cout << MAGENTA "[FragTrap] " << MAGENTA << this->name << BLANK << " run away." << std::endl;;
}

void	FragTrap::highFivesGuys()
{
	std::cout << MAGENTA "[FragTrap] " << MAGENTA << this->name << BLANK << " give me an high five." << std::endl;;
}
