
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Shrubbery Creation", 145, 137)
{
	this->target = "Culo";
	std::cout << "Form " << this->getName() << " constructed.";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
	*this = src;
	std::cout << YELLOW << this->getName() << BLUE "'s copy constructor called." BLANK << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Shrubbery Creation", 145, 137)
{
	this->target = target;
	std::cout << "Form " << this->getName() << " constructed.";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << YELLOW << this->getName() << RED "'s destructor called." BLANK << std::endl;
}

void	RobotomyRequestForm::drillIt()
{
	int r = std::experimental::randint(0, 1);

	if (r == 0)
		;
	else
		std::cout << this->target << "has been robotomized successfully "
}
