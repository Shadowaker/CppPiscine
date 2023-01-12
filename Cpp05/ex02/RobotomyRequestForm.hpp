#ifndef ROBOTOMYREQUESTESFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <fstream>
# include <experimental/random>

class RobotomyRequestForm : Form
{
	private:
		std::string	target;

		void		drillIt();

	protected:
		;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &scr);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();


};

#endif
