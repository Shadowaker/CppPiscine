

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

void	Animal::makeSound() const
{
	std::cout << BLUE "[ANIMAL] " MAGENTA << this->type << BLANK " do " << this->sound << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}
