#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <cstring>

# define RED	"\033[91m"
# define GREEN "\033[93m"
# define YELLOW "\033[92m"
# define BLUE "\033[94m"
# define MAGENTA "\033[95m"
# define BLANK "\033[0m"
# define RL_START "\1"
# define RL_END "\2"

# define STD_SIZE 30
# define MAX_SIZE 250

class Contact
{
	private:
		std::string		FirstName;
		std::string		LastName;
		std::string		Nickname;
		std::string		PhoneNumber;
		std::string		DarkestSecret;
	
	public:
		Contact();
		~Contact();

	void	show(int id);
	void	add();
	void	display();
};

class HitList
{
	private:
		Contact	contacts[8];
		int		amount;
	
	public:
		HitList();
		~HitList();
		
		void	menuHeader();
		void	add();
		void	search();
		void	show();
};


#endif