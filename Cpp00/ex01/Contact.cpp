#include "Contact.hpp"

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
