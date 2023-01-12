#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

# define RED	"\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define MAGENTA "\033[95m"
# define BLANK "\033[0m"
# define CYAN "\033[96m"

class Form;

class Bureaucrat
{
	private:
		std::string const	name;
		int					grade;

	protected:
		;

	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &bur);
		Bureaucrat(std::string name, int grade);
		virtual ~Bureaucrat();

	Bureaucrat	&operator=(const Bureaucrat &bur);

	std::string			getName() const;
	int					getGrade() const;

	void		promote();
	void		demote();

	void	signForm(Form &form);

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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur);

#endif
