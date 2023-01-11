#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

# define RED	"\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define MAGENTA "\033[95m"
# define BLANK "\033[0m"
# define CYAN "\033[96m"

class WrongAnimal
{
	private:
		;

	protected:
		std::string	type;
		std::string	sound;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &WrongAnimal);
		~WrongAnimal();

	void		makeSound() const;
	std::string	getType() const;

};

#endif
