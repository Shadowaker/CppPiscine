#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		Form	*makeShrub(std::string target);
		Form	*makeRobot(std::string target);
		Form	*makePres(std::string target);

	protected:
		;

	public:
		Intern();
		Intern(const Intern &intern);
		~Intern();

	Form *makeForm(std::string form, std::string target);
};

#endif
