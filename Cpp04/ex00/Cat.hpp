#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

# define RED	"\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define MAGENTA "\033[95m"
# define BLANK "\033[0m"
# define CYAN "\033[96m"

class Cat : public Animal
{
	private:
		;

	protected:
		;

	public:
		Cat();
		Cat(const Cat &animal);
		~Cat();
};

#endif
