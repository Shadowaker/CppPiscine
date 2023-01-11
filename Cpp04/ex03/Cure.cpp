#include "Cure.hpp"

Cure::Cure()
{
	this->AMateria::type = "cure";
	std::cout << YELLOW "[CURE] " BLANK "Created." << std::endl;
}

Cure::Cure(const Cure &cure)
{
	*this = cure;
	std::cout << YELLOW "[CURE] " BLANK "Copy created." << std::endl;
}

Cure::~Cure()
{
	std::cout << YELLOW "[CURE] " BLANK "Destroyed." << std::endl;
}

AMateria	*Cure::clone() const
{
	AMateria	*cure = new Cure();

	std::cout << YELLOW "[CURE] " BLANK "Deep copy created." << std::endl;
	return (cure);
}
