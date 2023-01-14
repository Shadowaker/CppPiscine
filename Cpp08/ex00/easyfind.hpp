#include <iostream>

template <typename T>
int	easyfind(T &c, int i)
{
	for (int x = 0; c[x]; x++)
	{
		if (i == c[x])
			return (x);
	}
	throw (std::out_of_range());
}


