
#include "pbook.hpp"

static void	showstr(std::string str, std::size_t lim)
{

	if (str.size() > lim)
	{
		for (std::size_t i=0; i < lim; i++)
			putchar(str[i]);
	}
	else
	{
		for (std::size_t i=0; i < str.size(); i++)
			putchar(str[i]);
		lim = lim - str.size();
		for (std::size_t i=0; i < lim; i++)
			putchar(' ');
	}
}

static int	ft_isdigit(std::string str)
{
	for (std::size_t x = 0; x < str.size(); x++)
	{
		if (!isdigit(str[x]))
			return (0);
	}
	return (1);
}

Contact::Contact()
{
	;
}

Contact::~Contact()
{
	;
}

void	Contact::add()
{
	std::cout << "Enter contact first name: ";
	std::getline(std::cin, this->FirstName);
	if (std::cin.eof())
		return ;
	while(!this->FirstName.compare(""))
	{
		std::cout << "No empty fields allowed!" << std::endl; 
		std::cout << "Enter contact first name: ";
		std::getline(std::cin, this->FirstName);
		if (std::cin.eof())
			return ;
	}
  
  	std::cout << "Enter contact last name: ";
	std::getline(std::cin, this->LastName);
	if (std::cin.eof())
		return ;
	while(!this->LastName.compare(""))
	{
		std::cout << "No empty fields allowed!" << std::endl; 
		std::cout << "Enter contact last name: ";
		std::getline(std::cin, this->LastName);
		if (std::cin.eof())
			return ;
	}
	
	std::cout << "Enter contact nickname: ";
	std::getline(std::cin, this->Nickname);
	if (std::cin.eof())
		return ;
	while(!this->Nickname.compare(""))
	{
		std::cout << "No empty fields allowed!" << std::endl; 
		std::cout << "Enter contact nickname: ";
		std::getline(std::cin, this->Nickname);
		if (std::cin.eof())
			return ;
	}
	
	std::cout << "Enter contact Phone Number: ";
	std::getline(std::cin, this->PhoneNumber);
	if (std::cin.eof())
		return ;
	while(!ft_isdigit(this->PhoneNumber))
	{
		std::cout << "I need only numbers!" << std::endl; 
		std::cout << "Enter contact Phone Number: ";
		std::getline(std::cin, this->PhoneNumber);
		if (std::cin.eof())
			return ;
	}
	
	std::cout << "Does he have a darkest secret? " << std::endl;
	std::getline(std::cin, this->DarkestSecret);
	if (std::cin.eof())
		return ;
	while(!this->DarkestSecret.compare(""))
	{
		std::cout << "No empty fields allowed!" << std::endl; 
		std::cout << "Does he have a darkest secret? ";
		std::getline(std::cin, this->DarkestSecret);
		if (std::cin.eof())
			return ;
	}
}

void	Contact::show(int id)
{
	std::cout << "|"; 
	for (int y=0; y < 10; y++)
	{
		if (y == 5)
			putchar(id + 48);
		else
			putchar(' ');
	}
	std::cout << "|";
	showstr(this->FirstName, 10);
	std::cout << "|";
	showstr(this->LastName, 10);
	std::cout << "|";
	showstr(this->Nickname, 10);
	std::cout << "|" << std::endl;
}

void	Contact::display()
{
	std::cout << "First Name: ";
	showstr(this->FirstName, this->FirstName.size());
	std::cout << std::endl << "Last Name: ";
	showstr(this->LastName, this->LastName.size());
	std::cout << std::endl << "Nickname: ";
	showstr(this->Nickname, this->Nickname.size());
	std::cout << std::endl << "Phone Number: ";
	showstr(this->PhoneNumber, this->PhoneNumber.size());
	std::cout << std::endl << "Darkest Secret: ";
	showstr(this->DarkestSecret, this->DarkestSecret.size());
	std::cout << std::endl;
}

HitList::HitList()
{
	this->amount = 0;
}

HitList::~HitList()
{
	for (int i = 0; i < this->amount; i++)
		this->contacts[i].~Contact();
}

void	HitList::menuHeader()
{
	std::cout << MAGENTA "-> Your personal hitlist " BLANK << std::endl;
	std::cout << GREEN "-> Enter your command [ADD, SEARCH, EXIT]" BLANK << std::endl;
}

void HitList::add(void)
{
	if (this->amount == 8)
	{
		std::cout << "-> It seems you have a lot of people to kill..." << std::endl;
		std::cout << "-> I'll delete the first contact and add this." << std::endl;
		this->contacts[7].~Contact();
		this->amount--;
	}
	if (this->amount != 0)
	{
		for (int x = this->amount; x >= 0; x--)
			this->contacts[x + 1] = this->contacts[x];
	}
	this->contacts[0] = Contact();
	this->contacts[0].add();
	this->amount++;
}

void HitList::show(void)
{
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|                                           |" << std::endl;
	std::cout << "|  Index   |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "|___________________________________________|" << std::endl;
	for (int i = 0; i < this->amount; i++)
		this->contacts[i].show(i);
	std::cout << "|___________________________________________|" << std::endl;
	std::cout << "                                             " << std::endl;
}

void HitList::search(void)
{
	int			id;
	std::string	buf;

	if (this->amount == 0)
		std::cout << YELLOW "> " BLANK << "It seems a little empty here..." << std::endl;
	else
	{
		this->show();
		std::cout << YELLOW "> " BLANK << "Enter Index to display Informations or 8 to exit." << std::endl;
		std::cout << YELLOW "> " BLANK;
		std::cin >> id;
		if (id < 0 || (id > this->amount && id != 8))
			std::cout << YELLOW "> " BLANK << "Invalid Index." << std::endl;
		else if (id == 8)
			;
		else
			this->contacts[id].display();
		std::getline(std::cin, buf);
		if (std::cin.eof())
			return ;
		std::cout << std::endl;
	}
}