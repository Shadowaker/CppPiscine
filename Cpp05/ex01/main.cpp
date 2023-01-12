#include "Form.hpp"

int	main(void)
{
	Bureaucrat				john("John", 1);
	Bureaucrat				shrub("cozy", 120);
	Form					build("Robottino", 119, 119);

	std::cout << build << std::endl;

	build.signForm(shrub);
	build.signForm(john);

	std::cout << build << std::endl;
	return (0);
}
