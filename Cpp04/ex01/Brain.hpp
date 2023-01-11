#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define RED	"\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define MAGENTA "\033[95m"
# define BLANK "\033[0m"
# define CYAN "\033[96m"

class Brain
{
	private:
		int	size;
		std::string ideas[100];

	protected:
		;

	public:
		Brain();
		Brain(const Brain &brain);
		~Brain();

	void		newIdea(std::string idea);
	std::string	*getIdeas();
};

#endif
