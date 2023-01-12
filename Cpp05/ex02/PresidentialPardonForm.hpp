#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include <fstream>

class PresidentialPardonForm : Form
{
	private:
		std::string	target;
		void		putFile();

	protected:
		;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &scr);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();


};

#endif
