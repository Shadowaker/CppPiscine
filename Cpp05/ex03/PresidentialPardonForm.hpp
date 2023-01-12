#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include <fstream>

class PresidentialPardonForm : public Form
{
	private:
		std::string	target;
		void		pardon() const;

	protected:
		;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &scr);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();

	void	execute(Bureaucrat const & executor) const;
};

#endif
