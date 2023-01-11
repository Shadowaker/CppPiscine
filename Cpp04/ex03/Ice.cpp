#include "Ice.hpp"

Ice::Ice()
{
	this->AMateria::type = "ice";
	std::cout << YELLOW "[ICE] " BLANK "Created." << std::endl;
}

Ice::Ice(const Ice &ice)
{
	*this = ice;
	std::cout << YELLOW "[ICE] " BLANK "Copy created." << std::endl;
}

Ice::~Ice()
{
	;std::cout << YELLOW "[ICE] " BLANK "Destroyed." << std::endl;
}

AMateria	*Ice::clone() const
{
	AMateria	*ice = new Ice();

	std::cout << YELLOW "[ICE] " BLANK "Deep copy created." << std::endl;

	return (ice);
}
