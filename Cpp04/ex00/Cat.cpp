#include "Cat.hpp"

Cat::Cat()
{
	this->Animal::type = "Cat";
	this->Animal::sound = "a little miao.";
	std::cout << YELLOW "[CAT] " BLANK << " It's a cat!" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	*this = cat;
	std::cout << YELLOW "[CAT] " BLANK <<  " It's a cat!" << std::endl;
}

Cat::~Cat()
{
	std::cout << YELLOW "[CAT] " MAGENTA << this->type << BLANK " ignores you." << std::endl;
}
