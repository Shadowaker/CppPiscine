
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat				john("John", 1);
	Bureaucrat				Dan("Dan", 150);

	ShrubberyCreationForm	shrub("Cozy");
	RobotomyRequestForm		robot("Mike");
	PresidentialPardonForm	pres("Jerry Smith");

	try
	{
		john.signForm(shrub);
		//shrub.execute(Dan);
		shrub.execute(john);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		john.signForm(robot);
		//robot.execute(Dan);
		robot.execute(john);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		john.signForm(pres);
		//pres.execute(Dan);
		pres.execute(john);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
