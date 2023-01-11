#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# define RED	"\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define MAGENTA "\033[95m"
# define BLANK "\033[0m"
# define CYAN "\033[96m"

class Animal
{
	private:
		;

	protected:
		std::string	type;
		std::string	sound;

	public:
		Animal();
		Animal(const Animal &animal);
		virtual ~Animal();

	void		makeSound() const;
	std::string	getType() const;

};

#endif
