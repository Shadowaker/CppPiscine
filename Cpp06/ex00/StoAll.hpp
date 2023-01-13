#ifndef STOALL_HPP
# define STOALL_HPP

# include <iostream>
# include <string>
# include <sstream>

# define RED	"\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[93m"
# define BLUE "\033[94m"
# define MAGENTA "\033[95m"
# define BLANK "\033[0m"
# define CYAN "\033[96m"

class StoAll
{
	private:
		std::string	c;
		std::string	i;
		std::string	f;
		std::string	d;

		std::string	toChar(std::string str);
		std::string	toInt(std::string str);
		std::string	toFloat(std::string str);
		std::string	toDouble(std::string str);

	protected:
		;

	public:
		StoAll();
		StoAll(const StoAll &stoall);
		StoAll(std::string str);
		~StoAll();

	std::string	getChar() const;
	std::string	getInt() const;
	std::string	getFloat() const;
	std::string	getDouble() const;

	StoAll	&operator=(const StoAll &n);


};

std::ostream &operator<<(std::ostream &out, const StoAll &stoall);

#endif
