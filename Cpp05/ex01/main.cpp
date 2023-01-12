#include "Form.hpp"

int	main(void)
{
	Bureaucrat				john("John", 1);
	Bureaucrat				dan("cozy", 120);
	Form					build("Robottino", 119, 119);

	std::cout << build << std::endl;

	dan.signForm(build);
	john.signForm(build);

	std::cout << build << std::endl;
	return (0);
}
