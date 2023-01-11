#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->WrongAnimal::type = "WrongCat";
	std::cout << GREEN "[WRONGCAT] " BLANK << " It's a funny cat!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &Wrongcat)
{
	*this = Wrongcat;
	std::cout << GREEN "[WRONGCAT] " BLANK <<  " It's a funny cat!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << GREEN "[WRONGCAT] " MAGENTA << this->type << BLANK " goes to sleep." << std::endl;
}
