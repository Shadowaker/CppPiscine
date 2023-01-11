#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

# define RED	"\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define MAGENTA "\033[95m"
# define BLANK "\033[0m"
# define CYAN "\033[96m"

class Dog : public Animal
{
	private:
		Brain* brain;

	protected:
		;

	public:
		Dog();
		Dog(const Dog &animal);
		~Dog();

	void	makeSound() const;

};

#endif
