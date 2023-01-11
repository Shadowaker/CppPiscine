#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "";
	this->sound = "";
	std::cout << RED "[WRONGANIMAL] " BLANK << " A wild strange animal appear!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &Wronganimal)
{
	*this = Wronganimal;
	std::cout << RED "[WRONGANIMAL] " BLANK << " A wild strange animal appear! " << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED "[WRONGANIMAL] " MAGENTA << this->type << BLANK " runs away... " << std::endl;
}

void	WrongAnimal::makeSound() const
{
	if (this->type == "WrongCat")
		std::cout << RED "[WRONGANIMAL] " MAGENTA << this->type << BLANK " does a... bark?!" << std::endl;
	else if (this->type == "WrongDog")
		std::cout << RED "[WRONGANIMAL] " MAGENTA << this->type << BLANK " does a... miao?!" << std::endl;
	else
		std::cout << RED "[WRONGANIMAL] " MAGENTA << this->type << BLANK " does nothing..." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}
