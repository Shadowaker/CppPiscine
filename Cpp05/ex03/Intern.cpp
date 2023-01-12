
#include "Intern.hpp"


Intern::Intern()
{
	;
}

Intern::Intern(const Intern &intern)
{
	*this = intern;
}

Intern::~Intern()
{
	;
}

Form *Intern::makeForm(std::string form, std::string target)
{
	Form							*object;
	std::string						forms[3] =
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	Form *(Intern::*constrs[3])(std::string) =
	{
		&Intern::makeShrub,
		&Intern::makeRobot,
		&Intern::makePres
	};

	for (int i = 0 ; i < 3 ; i++)
	{
		if (form == forms[i])
		{
			object = (this->*constrs[i])(target);
			std::cout << GREEN "Intern creates " << forms[i] << "." BLANK << std::endl;
			return (object);
		}
	}
	std::cout << RED "Intern is useless..." BLANK << std::endl;
	return (NULL);
}

Form	*Intern::makeShrub(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeRobot(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::makePres(std::string target)
{
	return (new PresidentialPardonForm(target));
}
