
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->name = "Unnamed";
	this->ClapTrap::setName(this->name + "_clap_name");
	this->hp = this->FragTrap::getHp();
	this->eng = this->ScavTrap::getEng();
	this->atk = this->FragTrap::getAtk();
	this->ClapTrap::setAtk(this->atk);
	this->ClapTrap::setEng(this->eng);
	this->ClapTrap::setHp(this->hp);

	std::cout << CYAN "[DiamondTrap] " BLANK << MAGENTA << this->name << BLANK << " appeared." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(), ScavTrap(), FragTrap()
{
	this->ClapTrap::setName(name + "_clap_name");
	this->name = name;
	this->hp = this->FragTrap::getHp();
	this->eng = this->ScavTrap::getEng();
	this->atk = this->FragTrap::getAtk();
	this->ClapTrap::setAtk(this->atk);
	this->ClapTrap::setEng(this->eng);
	this->ClapTrap::setHp(this->hp);

	std::cout << CYAN "[DiamondTrap] " BLANK << MAGENTA << this->name << BLANK << " appeared." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	;
}

void	DiamondTrap::WhoAmI()
{
	std::cout << CYAN "[DiamondTrap] " << MAGENTA << this->name << BLANK << " has " BLUE << this->ClapTrap::getName() << BLANK << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
}
