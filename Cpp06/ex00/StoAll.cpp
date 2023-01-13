#include "StoAll.hpp"

StoAll::StoAll()
{
	this->value = "culo";
	std::cout << BLUE "[STOALL] " BLANK " Created." << std::endl;
}

StoAll::StoAll(const StoAll &stoall)
{
	*this = stoall;
	std::cout << BLUE "[STOALL] " BLANK " Copy created." << std::endl;
}

StoAll::StoAll(std::string str)
{
	this->value = str;
	std::cout << BLUE "[STOALL] " BLANK " Created." << std::endl;
}

StoAll::~StoAll()
{
	std::cout << BLUE "[STOALL] " RED " Destroyed." BLANK << std::endl;
}

StoAll	&StoAll::operator=(const StoAll &stoall)
{
	if (this == &stoall)
		return *(this);
	this->value = stoall.value;
	return *(this);
	std::cout << "Copy assignment operator called" << std::endl;
}


std::string		StoAll::toChar() const
{
	if (!(this->value.compare("-inf") || this->value.compare("+inf") || this->value.compare("-inff") || this->value.compare("+inff")))
		return ("Impossible");

	if (this->value.size() == 1)
	{
		if (int(this->value[0]) < 32 || int(this->value[0]) > 126)
			return ("Not Displayable");
		char s[2] = {static_cast<int> (this->value[0]), '\0'};
		return (s);
	}
	else
	{
		char	s[this->value.size()];

		for (int x = 0; x < this->value.size(); x++)
			s[x] = this->value[x];

		int	n = std::atoi(s);
		char s1[2] = {n, '\0'};
		return (s1);
	}
}

std::string		StoAll::toInt() const
{
	if (!(this->value.compare("-inf") || this->value.compare("+inf") || this->value.compare("-inff") || this->value.compare("+inff")))
		return ("Impossible");

	if (this->value.size() == 1)
	{
		if (this->value[0] < 48 || this->value[0] > 57)
			return (std::to_string(this->value[0]));
	}

	char	s[this->value.size()];

	for (int x = 0; x < this->value.size(); x++)
		s[x] = this->value[x];

	long int	n = std::atol(s);

	if (n > 2147483647 || n < -2147483648)
		return ("Outside Int range");

	return (std::to_string(n));
}

std::string		StoAll::toFloat() const
{
	std::ostringstream	ss;

	if (!(this->value.compare("-inf") || this->value.compare("-inff")))
		return ("-inff");
	if (!(this->value.compare("+inf") || this->value.compare("+inff")))
		return ("+inff");

	if (this->value.size() == 1)
	{
		float f;
		if (this->value[0] < 48 || this->value[0] > 57)
			f = char(this->value[0]);
		else
			return(this->value + "f");
		ss << f;
		std::string s(ss.str());
		return (s + "f");
	}

	try
	{
		float f = std::stof(this->value);
		ss << f;
		std::string s(ss.str());
		return (s + "f");
	}
	catch (std::invalid_argument)
	{
		return "nanf";
	}
}

std::string		StoAll::toDouble() const
{
	std::ostringstream	ss;

	if (!(this->value.compare("-inf") || this->value.compare("-inff")))
		return ("-inf");
	if (!(this->value.compare("+inf") || this->value.compare("+inff")))
		return ("+inf");

	if (this->value.size() == 1)
	{
		double d;

		if (this->value[0] < 48 || this->value[0] > 57)
			d = char(this->value[0]);
		else
			return(this->value + ".0");
		ss << d;
		std::string s(ss.str());
		if (s.find('.') == s.npos && s.compare("nan"))
			return(s + ".0");
		return (s);
	}
	try
	{
		double d = std::stod(this->value);
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

std::ostream &operator<<(std::ostream &out, const StoAll &stoall)
{
	out << std::endl;
	out << "----------------------------------------" << std::endl;
	out << "Char: " << stoall.toChar() << std::endl;
	out << "Int: " << stoall.toInt() << std::endl;
	out << "Float: " << stoall.toFloat() << std::endl;
	out << "Double: " << stoall.toDouble() << std::endl;
	out << "----------------------------------------" << std::endl;
	return (out);
}
