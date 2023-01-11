#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

# define RED	"\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define MAGENTA "\033[95m"
# define BLANK "\033[0m"
# define CYAN "\033[96m"

class WrongCat : public WrongAnimal
{
	private:
		;

	protected:
		;

	public:
		WrongCat();
		WrongCat(const WrongCat &animal);
		~WrongCat();
};

#endif
