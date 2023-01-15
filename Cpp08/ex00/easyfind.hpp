
#include <list>
#include <vector>
#include <iostream>
#include <algorithm>

class NotFound : public std::exception
{
	public:
		const char* what() const throw()
		{
			return ("Element not found.");
		}
};

template <class T>
typename T::iterator easyfind(T& c, int i)
{
	typename T::iterator x = std::find(c.begin(), c.end(), i);
	if (x != c.end())
		return x;
	throw (NotFound());
}


