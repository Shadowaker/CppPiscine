#include "pbook.hpp"

int main()
{
	HitList 		hitlist;
	std::string		str;
	//std::string		exit = "EXIT", add = "ADD", search = "SEARCH";

	hitlist = HitList();
	hitlist.menuHeader();
	str = "";
	while (str.compare(EXIT) != 0)
	{
		if (!str.compare(SEARCH))
			hitlist.search();
		else if (!str.compare(ADD))
			hitlist.add();
		else if (!str.compare(""))
			;
		else
			std::cout << "'" << str << "'" << " is not a valid instruction." << std::endl;
		std::cout << RED "> " BLANK;
		std::getline(std::cin, str); 
	}
}