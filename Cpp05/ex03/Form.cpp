#include "Form.hpp"

Form::Form() : name("Culo"), min_sign(150), min_exec(150)
{
	this->issigned = false;
	std::cout << YELLOW << this->name << GREEN "'s constructor called." BLANK << std::endl;
}

Form::Form(const Form &form) : min_sign(form.min_sign), min_exec(form.min_exec)
{
	*this = form;
	std::cout << YELLOW << this->name << BLUE "'s copy constructor called." BLANK << std::endl;
}

Form::Form(std::string name, int min_sign, int min_exec) : name(name), min_sign(min_sign), min_exec(min_exec)
{
	if (min_sign < 1 || min_exec < 1)
		throw Form::GradeTooHighException();
	else if (min_sign > 150 || min_exec > 150)
		throw Form::GradeTooLowException();
	this->issigned = false;
	std::cout << YELLOW << this->name << GREEN "'s constructor called." BLANK << std::endl;
}

Form::~Form()
{
	std::cout << YELLOW << this->name << RED "'s destructor called." BLANK << std::endl;
}

Form	&Form::operator=(const Form &bur)
{
	if (this == &bur)
		return *(this);
	std::cout << BLUE "Copy assignment called." BLANK << std::endl;
	return *(this);
}

std::string	Form::getName() const
{
	return this->name;
}

int	Form::getMinSign() const
{
	return this->min_sign;
}

int	Form::getMinExec() const
{
	return this->min_sign;
}

bool	Form::getIsSigned() const
{
	return this->issigned;
}

void	Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->min_sign)
		throw (Form::GradeTooLowException());
	else if (bur.getGrade() < 1)
		throw (Form::GradeTooHighException());
	else
		this->issigned = true;
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->min_exec)
		throw (Form::GradeTooLowException());
	std::cout << this->name << "is being executed by" << executor.getName() << std::endl;
	executor.executeForm(*this);
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << std::endl;
	out << "----------------------------------------" << std::endl;
	out << "Name: " << form.getName() << std::endl;
	out << "MinSign: " << form.getMinSign() << std::endl;
	out << "MinExec: " << form.getMinExec() << std::endl;
	out << "IsSigned: " << form.getIsSigned() << std::endl;
	out << "----------------------------------------" << std::endl;
	return (out);
}

