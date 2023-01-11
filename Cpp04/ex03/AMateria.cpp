#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "Void";
	std::cout << BLUE "[AMATERIA] " BLANK << "Created." << std::endl;
}

AMateria::AMateria(const AMateria &AMateria)
{
	*this = AMateria;
	std::cout << BLUE "[AMATERIA] " BLANK << " Copy Created." << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
	std::cout << BLUE "[AMATERIA] " BLANK << "Created." << std::endl;
}

AMateria::~AMateria()
{
	;
	std::cout << BLUE "[AMATERIA] " BLANK << "Deleted." << std::endl;
}

std::string const	&AMateria::getType() const
{
	return(this->type);
}

void	AMateria::use(ICharacter &target)
{
	if (this->type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
	else if (this->type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
