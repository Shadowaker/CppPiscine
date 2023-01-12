#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : Form
{
	private:
		std::string	target;
		void		putFile();

	protected:
		;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &scr);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();

};

#endif
