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

	if (str.size() == 1)
	{
		char c[2] = {str[0], '\0'};
		return (c);
	}

	char	s[str.size()];

	for (int x = 0; x < str.size(); x++)
		s[x] = str[x];

	int	n = std::atoi(s);

	if ((n >= 32 && n < 127))
	{
		char c[2] = {n, '\0'};
		return (c);
	}

	return ("Not Displayable");
}

std::string		StoAll::toInt(std::string str)
{
	if (!(str.compare("-inf") || str.compare("+inf") || str.compare("-inff") || str.compare("+inff")))
		return ("Impossible");

	if (str.size() == 1)
	{
		return (std::to_string(str[0]));
	}

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
	std::ostringstream	ss;

	if (!(str.compare("-inf") || str.compare("-inff")))
		return ("-inff");
	if (!(str.compare("+inf") || str.compare("+inff")))
		return ("+inff");

	if (str.size() == 1)
	{
		std::cout << "culo" << std::endl;
		float d = char(str[0]);
		ss << d;
		std::string s(ss.str());
		return (s + "f");
	}

	try
	{
		float f = std::stof(str);
		ss << f;
		std::string s(ss.str());
		return (s + "f");
	}
	catch (std::invalid_argument)
	{
		return "nanf";
	}
}

std::string		StoAll::toDouble(std::string str)
{
	std::ostringstream	ss;

	if (!(str.compare("-inf") || str.compare("-inff")))
		return ("-inf");
	if (!(str.compare("+inf") || str.compare("+inff")))
		return ("+inf");

	if (str.size() == 1)
	{
		std::cout << "culo" << std::endl;
		double d = char(str[0]);
		ss << d;
		std::string s(ss.str());
		if (s.find('.') == s.npos && s.compare("nan"))
			return(s + ".0");
		return (s);
	}
	try
	{
		double d = std::stof(str);
		std::cout << d << std::endl;
		ss << d;
		std::string s(ss.str());
		if (s.find('.') == s.npos && s.compare("nan"))
			return(s + ".0");
		return (s);
	}
	catch (std::invalid_argument)
	{
		return "nan";
	}
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
