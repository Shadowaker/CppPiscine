

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "";
	this->sound = "";
	std::cout << BLUE "[ANIMAL] " BLANK << " A wild animal appear!" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	*this = animal;
	std::cout << BLUE "[ANIMAL] " BLANK << " A wild animal appear! " << std::endl;
}

Animal::~Animal()
{
	std::cout << BLUE "[ANIMAL] " MAGENTA << this->type << BLANK " runs away... " << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}
