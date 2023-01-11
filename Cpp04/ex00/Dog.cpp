#include "Dog.hpp"

Dog::Dog()
{
	this->Animal::type = "Dog";
	this->Animal::sound = "a little bark.";
	std::cout << YELLOW "[DOG] " BLANK << " It's a dog!" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	*this = dog;
	std::cout << YELLOW "[DOG] " BLANK <<  " It's a dog!" << std::endl;
}

Dog::~Dog()
{
	std::cout << YELLOW "[DOG] " MAGENTA << this->type << BLANK " runs away chasing a leaf..." << std::endl;
}
