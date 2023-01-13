#include "StoAll.hpp"

StoAll::StoAll()
{
	this->c = "Not displayable";
	this->i = "Outside Int range";
	this->f = "nanf";
	this->d = "nan";
	std::cout << BLUE "[STOALL] " BLANK " Created." << std::endl;
}

StoAll::StoAll(const StoAll &stoall)
{
	*this = stoall;
	std::cout << BLUE "[STOALL] " BLANK " Copy created." << std::endl;
}

StoAll::StoAll(std::string str)
{
	this->c = this->toChar(str);
	this->i = this->toInt(str);
	this->f = this->toFloat(str);
	this->d = this->toDouble(str);
}

StoAll::~StoAll()
{
	std::cout << BLUE "[STOALL] " RED " Destroyed." BLANK << std::endl;
}

StoAll	&StoAll::operator=(const StoAll &stoall)
{
	if (this == &stoall)
		return *(this);
	this->c = stoall.c;
	this->i = stoall.i;
	this->f = stoall.f;
	this->d = stoall.d;
	return *(this);
	std::cout << "Copy assignment operator called" << std::endl;
}


std::string		StoAll::toChar(std::string str)
{
	if (!(str.compare("-inf") || str.compare("+inf") || str.compare("-inff") || str.compare("+inff")))
		return ("Impossible");

	if (std::atoi(&str[0]) < 48 || std::atoi(&str[0]) > 57)
		return ("Not Displayable");

	char	s[str.size()];

	for (int x = 0; x < str.size(); x++)
		s[x] = str[x];

	int	n = std::atoi(s);

	if (((n >= 32 && n < 48) || (n >= 58 && n < 127)))
		return (std::to_string(n));

	return ("Not Displayable");
}

std::string		StoAll::toInt(std::string str)
{
	if (!(str.compare("-inf") || str.compare("+inf") || str.compare("-inff") || str.compare("+inff")))
		return ("Impossible");

	if (std::atoi(&str[0]) < 48 || std::atoi(&str[0]) > 57)
		return ("Not Displayable");

	char	s[str.size()];

	for (int x = 0; x < str.size(); x++)
		s[x] = str[x];

	long int	n = std::atol(s);

	if (n > 2147483647 || n < -2147483648)
		return ("Outside Int range");

	return (std::to_string(n));
}

std::string		StoAll::toFloat(std::string str)
{
	if (!(str.compare("-inf") || str.compare("-inff")))
		return ("-inff");
	if (!(str.compare("+inf") || str.compare("+inff")))
		return ("+inff");

	try
	{
		float f = std::stof(str);
	}
	catch (std::invalid_argument)
	{
		return "nanf";
	}

	return ();
}

std::string		StoAll::toDouble(std::string str)
{
	if (!(str.compare("-inf") || str.compare("-inff")))
		return ("-inf");
	if (!(str.compare("+inf") || str.compare("+inff")))
		return ("+inf");

	try
	{
		double d = std::stod(str);
	}
	catch (std::invalid_argument)
	{
		return "nan";
	}
	return ();
}

std::string	StoAll::getChar() const
{
	return this->c;
}

std::string	StoAll::getInt() const
{
	return this->i;
}

std::string	StoAll::getFloat() const
{
	return this->f;
}

std::string	StoAll::getDouble() const
{
	return this->d;
}

std::ostream &operator<<(std::ostream &out, const StoAll &stoall)
{
	out << std::endl;
	out << "----------------------------------------" << std::endl;
	out << "Char: " << stoall.getChar() << std::endl;
	out << "Int: " << stoall.getInt() << std::endl;
	out << "Float: " << stoall.getFloat() << std::endl;
	out << "Double: " << stoall.getDouble() << std::endl;
	out << "----------------------------------------" << std::endl;
	return (out);
}
