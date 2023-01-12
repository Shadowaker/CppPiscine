
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon", 25, 5)
{
	this->target = "Culo";
	std::cout << "Form " CYAN << this->getName() << BLANK " constructed." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{
	*this = src;
	std::cout << YELLOW << this->getName() << BLUE "'s copy constructor called." BLANK << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon", 25, 5)
{
	this->target = target;
	std::cout << "Form " CYAN << this->getName() << BLANK " constructed." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << YELLOW << this->getName() << RED "'s destructor called." BLANK << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getMinExec())
		throw (Form::GradeTooLowException());
	std::cout << this->getName() << " is being executed by " << executor.getName() << std::endl;
	executor.executeForm(*this);
	this->pardon();
}

void	PresidentialPardonForm::pardon() const
{
	std::cout << GREEN << this->target <<  "has been pardoned by Zaphod Beeblebrox." BLANK << std::endl;
}
