#ifndef ROBOTOMYREQUESTESFORM_HPP
# define ROBOTOMYREQUESTESFORM_HPP

# include "Form.hpp"
# include <fstream>

class RobotomyRequestForm : public Form
{
	private:
		std::string	target;
		void		drillIt() const;

	protected:
		;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &scr);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();

	void	execute(Bureaucrat const & executor) const;
};

#endif
