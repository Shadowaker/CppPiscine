
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(), ScavTrap(), FragTrap()
{
	this->ClapTrap::setName(name + "_clap_name");
	this->name = name;
	this->hp = this->FragTrap::getHp();
	this->eng = this->ScavTrap::getEng();
	this->atk = this->FragTrap::getAtk();
}

DiamondTrap::~DiamondTrap()
{
	;
}

void	DiamondTrap::WhoAmI()
{
	std::cout << LAMP "[DiamondTrap] " << MAGENTA << this->name << BLANK << " has " << this->ClapTrap::getName() << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
}
