
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation", 145, 137)
{
	this->target = "Culo";
	std::cout << "Form " MAGENTA << this->getName() << BLANK " constructed." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
{
	*this = src;
	std::cout << YELLOW << this->getName() << BLUE "'s copy constructor called." BLANK << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation", 145, 137)
{
	this->target = target;
	std::cout << "Form " MAGENTA << this->getName() << BLANK " constructed." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << YELLOW << this->getName() << RED "'s destructor called." BLANK << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getMinExec())
		throw (Form::GradeTooLowException());
	std::cout << this->getName() << " is being executed by " << executor.getName() << std::endl;
	executor.executeForm(*this);
	this->putFile();
}

void	ShrubberyCreationForm::putFile() const
{
	std::ofstream out;

	out.open("./" + this->target + "_shrubbery");
	if (!out)
		return ;

	out << "                                                                                          " << std::endl;
	out << "                                          ░░▒▒░░░░░░▒▒                                    " << std::endl;
	out << "                              ░░░░▒▒░░░░░░░░░░░░░░░░▒▒░░                                  " << std::endl;
	out << "                            ░░░░░░░░░░▒▒▒▒▒▒░░░░░░░░░░▒▒░░                                " << std::endl;
	out << "                          ▒▒░░░░░░░░░░▒▒▒▒▒▒░░░░░░░░░░░░▒▒░░░░░░░░░░                      " << std::endl;
	out << "                          ▒▒░░░░░░░░░░▒▒▒▒▒▒░░░░░░░░▒▒▓▓▒▒░░░░░░░░▒▒░░                    " << std::endl;
	out << "                        ▒▒░░░░░░░░░░░░▒▒▓▓▒▒▒▒▒▒░░░░▒▒▒▒▒▒░░░░▒▒░░░░▒▒                    " << std::endl;
	out << "                  ░░▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░▒▒░░░░░░▒▒▒▒░░░░▒▒░░░░░░░░▒▒░░▒▒                    " << std::endl;
	out << "                ▒▒▒▒░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░▒▒▒▒░░▒▒▒▒░░░░▒▒░░                " << std::endl;
	out << "              ░░▒▒▒▒░░░░░░▒▒▒▒▒▒▒▒▒▒░░░░▒▒░░░░░░░░░░░░░░░░▒▒▒▒░░░░░░░░░░▒▒                " << std::endl;
	out << "          ░░▒▒▒▒░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒░░░░░░░░▒▒░░░░░░░░▒▒▒▒▒▒░░▒▒░░▒▒▒▒▒▒▒▒              " << std::endl;
	out << "          ░░░░░░▒▒░░░░░░░░▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▓▓▓▓▒▒▒▒░░▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒              " << std::endl;
	out << "    ░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▓▓▒▒░░░░▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒            " << std::endl;
	out << "  ░░░░░░░░░░▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓░░░░▒▒▒▒▒▒▒▒██░░▒▒░░▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒          " << std::endl;
	out << "  ░░▒▒░░░░░░▒▒▒▒▒▒▒▒▒▒▓▓░░▓▓▒▒▓▓▓▓▒▒░░▒▒▓▓▓▓▒▒░░▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒░░▒▒▒▒▒▒░░        " << std::endl;
	out << "  ░░░░░░░░░░░░▓▓▒▒▒▒▒▒░░▒▒▓▓▓▓▒▒▓▓██▓▓████▓▓▓▓▒▒▓▓▓▓▒▒▓▓▒▒▓▓▓▓▒▒▒▒▓▓▓▓▒▒▒▒▒▒▒▒▒▒░░▒▒░░    " << std::endl;
	out << "  ░░▒▒░░░░░░▒▒▒▒▓▓▒▒▓▓░░░░▒▒▒▒██▓▓▓▓██████▒▒██▓▓▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▒▒░░░░▒▒░░░░░░▒▒▒▒  " << std::endl;
	out << "      ▒▒▒▒▒▒▒▒▒▒▓▓▒▒▓▓▒▒▒▒▒▒▓▓██▒▒██████▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓▒▒▒▒▓▓▒▒▒▒▒▒▒▒░░░░░░░░░░░░  " << std::endl;
	out << "        ▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓████▓▓░░░░▓▓  ▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒░░░░░░░░▒▒░░▒▒" << std::endl;
	out << "          ▒▒▒▒▒▒▒▒▓▓▓▓▓▓▒▒▓▓██░░▒▒▓▓      ▓▓▓▓  ▓▓▓▓▓▓▓▓▒▒░░░░▓▓▓▓▒▒▓▓▓▓▒▒▒▒▒▒░░░░▒▒▒▒▒▒  " << std::endl;
	out << "          ░░░░    ▓▓▒▒  ▒▒▓▓▓▓    ▒▒▒▒▒▒▓▓▒▒▓▓░░▒▒▓▓░░      ▓▓▓▓▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░  " << std::endl;
	out << "                          ▓▓▓▓      ▓▓▒▒▓▓▓▓▓▓▒▒▓▓▓▓      ░░▓▓          ░░▒▒░░▒▒░░░░░░    " << std::endl;
	out << "                          ▒▒▒▒▓▓▓▓▒▒██▒▒▓▓▓▓▒▒▓▓▓▓    ▓▓▒▒▓▓                              " << std::endl;
	out << "                              ▓▓▓▓▒▒▒▒▓▓▒▒▓▓▓▓▓▓▓▓▒▒▓▓▓▓░░                                " << std::endl;
	out << "                                ▓▓▓▓▒▒▓▓▒▒▒▒██████▓▓                                      " << std::endl;
	out << "                                  ▒▒▓▓▓▓▓▓▓▓▓▓▒▒░░                                        " << std::endl;
	out << "                                ▒▒▒▒▓▓▒▒▓▓▓▓▓▓                                            " << std::endl;
	out << "                                ▒▒▒▒▓▓▒▒▓▓▓▓                                              " << std::endl;
	out << "                                ▒▒▒▒▓▓▒▒▓▓▓▓                                              " << std::endl;
	out << "                                ▒▒▒▒▒▒▓▓▓▓                                                " << std::endl;
	out << "                                ▒▒▓▓▒▒▓▓▓▓                                                " << std::endl;
	out << "                              ▓▓▒▒▒▒▒▒▓▓▓▓                                                " << std::endl;
	out << "                              ▓▓▒▒▒▒▒▒▓▓▓▓▒▒                                              " << std::endl;
	out << "                            ▒▒▒▒▓▓▒▒▒▒▓▓▓▓▒▒                                              " << std::endl;
	out << "                          ▒▒▓▓▒▒▓▓▓▓▓▓▓▓▓▓▒▒░░  ░░                                        " << std::endl;
	out << "                ░░▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▓▓▓▓▒▒██▓▓░░▒▒  ░░░░                                  " << std::endl;
	out << "        ░░▒▒▓▓▒▒▒▒▒▒▓▓▒▒▒▒▓▓▒▒▓▓▒▒▓▓▒▒▒▒▓▓▒▒▓▓▒▒▒▒▒▒▒▒▒▒░░                                " << std::endl;
	out << "    ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▓▓▒▒▓▓▓▓▒▒▒▒▓▓▒▒▓▓▒▒▒▒▓▓▒▒▒▒▒▒▓▓▓▓▒▒▒▒                        " << std::endl;
	out << "  ░░▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▒▒▒▒▒▒▒▒▓▓▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▒▒░░                      " << std::endl;
	out << "  ░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒░░░░░░▒▒▒▒▒▒                      " << std::endl;
	out << "  ░░▒▒▒▒▒▒▒▒▒▒░░▒▒░░▒▒▒▒▓▓▓▓▒▒▒▒░░░░░░▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓░░░░                      " << std::endl;
	out << "    ▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒  ▓▓  ░░░░░░                              " << std::endl;
	out << "            ░░▒▒▒▒▒▒░░    ▓▓▓▓░░▓▓▒▒▒▒▒▒▒▒                                                " << std::endl;
	out.close();
	return ;
}
