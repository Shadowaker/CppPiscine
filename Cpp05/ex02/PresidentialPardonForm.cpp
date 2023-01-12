
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Shrubbery Creation", 145, 137)
{
	this->target = "Culo";
	std::cout << "Form " << this->getName() << " constructed.";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{
	*this = src;
	std::cout << YELLOW << this->getName() << BLUE "'s copy constructor called." BLANK << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Shrubbery Creation", 145, 137)
{
	this->target = target;
	std::cout << "Form " << this->getName() << " constructed.";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << YELLOW << this->getName() << RED "'s destructor called." BLANK << std::endl;
}

