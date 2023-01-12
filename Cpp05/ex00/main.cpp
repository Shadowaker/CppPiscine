#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bur("Pino", 1);
		std::cout << bur << std::endl;
		bur.promote();
	}
	catch (Bureaucrat::GradeTooHighException &b)
	{
		std::cout << b.what() << std::endl;
	}

	try
	{
		Bureaucrat bur("Pino", 150);
		for (int x = 0; x < 151; x++)
		{
			try
			{
				bur.promote();
			}
			catch (Bureaucrat::GradeTooHighException &a)
			{
				std::cout << RED << a.what() << BLANK << std::endl;
			}
		}
	}
	catch (Bureaucrat::GradeTooHighException &a)
	{
		std::cout << RED << a.what() << BLANK << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &a)
	{
		std::cout << RED << a.what() << BLANK << std::endl;
	}

	try
	{
		Bureaucrat bur("Ezreal", 15);
		std::cout << bur << std::endl;

		bur.promote();
	}
	catch (Bureaucrat::GradeTooHighException &a)
	{
		std::cout << a.what() << std::endl;
	}

	try
	{
		Bureaucrat burry("Benceslao", 150);
		std::cout << burry << std::endl;
		burry.promote();
	}
	catch (Bureaucrat::GradeTooLowException &c)
	{
		std::cout << c.what() << std::endl;
	}

	return 0;
}
