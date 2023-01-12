#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Culo"), grade(150)
{
	std::cout << YELLOW << this->name << GREEN "'s constructor called." BLANK << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bur)
{
	*this = bur;
	std::cout << YELLOW << this->name << BLUE "'s copy constructor called." BLANK << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
	std::cout << YELLOW << this->name << GREEN "'s constructor called." BLANK << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << YELLOW << this->name << RED "'s destructor called." BLANK << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &bur)
{
	if (this == &bur)
		return *(this);
	std::cout << BLUE "Copy assignment called." BLANK << std::endl;
	return *(this);
}

std::string	Bureaucrat::getName() const
{
	return this->name;
}

int	Bureaucrat::getGrade() const
{
	return this->grade;
}

void	Bureaucrat::promote()
{
	if (this->grade - 1 < 0)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void	Bureaucrat::demote()
{
	if (this->grade + 1 > 0)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

void	Bureaucrat::signForm(Form &form)
{
	Form::GradeTooHighException	e;

	try
	{
		form.beSigned(*this);
		std::cout << YELLOW << this->name << " signed " GREEN << form.getName() << BLANK << std::endl;
		return ;
	}
	catch (Form::GradeTooHighException &e) {}
	catch (Form::GradeTooLowException &e) {}
	std::cout << YELLOW << this->name << BLANK " couldn't sign " RED << form.getName() << BLANK " because: " RED << e.what() << BLANK << std::endl;

}

void	Bureaucrat::executeForm(Form const & form) const
{
	std::cout << this->name << " executed " << form.getName() << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur)
{
	out <<  bur.getName() << " bureaucrat grade: " << bur.getGrade();
	return (out);
}
