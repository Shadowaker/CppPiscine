#include "pbook.hpp"

int main()
{
	HitList 		hitlist;
	std::string		str;

	hitlist = HitList();
	hitlist.menuHeader();
	std::cout << RED "> " BLANK;
	std::getline(std::cin, str);
	while (str.compare("EXIT") == 0)
	{
		std::cout << std::endl;
		if (str.compare("SEARCH"))
			hitlist.search();
		else if (str.compare("ADD"))
			hitlist.add();
		else
			std::cout << "'" << str << "'" << " is not a valid instruction." << std::endl; 
		std::cout << RED "> " BLANK;
		std::getline(std::cin, str);
	}
}