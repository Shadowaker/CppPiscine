#include "Character.hpp"

Character::Character()
{
	this->name = "Character";
	this->size = 0;
	std::cout << CYAN "[CHARACTER] " BLANK << this->name << " created." << std::endl;
}

Character::Character(const Character &character)
{
	for (int x = 0; x < character.size; x++)
		delete character.inventory[x];

	*this = character;
	this->size = 0;
	std::cout << CYAN "[CHARACTER] " BLANK << this->name << " copy created." << std::endl;
}

Character::Character(std::string name)
{
	this->name = name;
	this->size = 0;
	std::cout << CYAN "[CHARACTER] " BLANK << this->name << " created." << std::endl;
}

Character::~Character()
{
	;
}

std::string const	&Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria *m)
{
	if (this->size > 3)
	{
		std::cout << RED "[CHARACTER] Inventory full." BLANK << std::endl;
		return ;
	}
	this->inventory[this->size] = m;
	this->size++;
	std::cout << CYAN "[CHARACTER] " BLANK << this->name << " equipped " << m->getType() << " at " << this->size - 1<< std::endl;
}

void	Character::unequip(int idx)
{
	if (idx > 3 || idx > this->size)
	{
		std::cout << RED "[CHARACTER] Item not found." BLANK << std::endl;
		return ;
	}
	for (int x = idx; x < this->size - 1; x++)
		this->inventory[x] = this->inventory[x + 1];
	this->inventory[this->size] = NULL;
	this->size--;
	std::cout << CYAN "[CHARACTER] " BLANK << this->name << " unequipped item at " << idx << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx > 3 || idx > this->size)
	{
		std::cout << RED "[CHARACTER] Item not found." BLANK << std::endl;
		return ;
	}
	this->inventory[idx]->AMateria::use(target);
}

