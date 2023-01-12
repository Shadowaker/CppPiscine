#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

# define RED	"\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define MAGENTA "\033[95m"
# define BLANK "\033[0m"
# define CYAN "\033[96m"

# include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const	name;
		bool				issigned;
		int const			min_sign;
		int const			min_exec;

		void	beSigned(Bureaucrat &bur);

	protected:
		;

	public:
		Form();
		Form(const Form &form);
		Form(std::string name, int min_sign, int min_exec);
		~Form();

	Form		&operator=(const Form &bur);

	std::string	getName() const;
	bool		getIsSigned() const;
	int			getMinSign() const;
	int			getMinExec() const;

	void	signForm(Bureaucrat &bur);


	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return "Error: Grade too high.";
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return "Error: Grade too low.";
			}
	};
};

std::ostream &operator<<(std::ostream &out, const Form &bur);

#endif
