#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
	private:
		std::string	target;
		void		putFile() const;

	protected:
		;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &scr);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();

void	execute(Bureaucrat const & executor) const;
};

#endif
