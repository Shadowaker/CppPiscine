
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy request", 72, 45)
{
	this->target = "Culo";
	std::cout << "Form " BLUE << this->getName() << BLANK " constructed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
	*this = src;
	std::cout << YELLOW << this->getName() << BLUE "'s copy constructor called." BLANK << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy request", 72, 45)
{
	this->target = target;
	std::cout << "Form " BLUE << this->getName() << BLANK " constructed." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << YELLOW << this->getName() << RED "'s destructor called." BLANK << std::endl;
}


void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getMinExec())
		throw (Form::GradeTooLowException());
	std::cout << this->getName() << " is being executed by " << executor.getName() << std::endl;
	executor.executeForm(*this);
	this->drillIt();
}

void	RobotomyRequestForm::drillIt() const
{
	int r = rand();

	if (r % 2 == 0)
		std::cout << this->target << " robotomy has failed." << std::endl;
	else
		std::cout << this->target << " has been robotomized successfully " << std::endl;
}
