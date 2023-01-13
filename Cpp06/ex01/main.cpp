#include <iostream>

struct	Data {std::string	str; int	a;};

uintptr_t	serialize(Data *ptr)
{
	return(reinterpret_cast <uintptr_t> (ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return(reinterpret_cast <Data *> (raw));
}

int	main(void)
{
	Data *hello = new Data;
	hello->a = 42;
	hello->str = "quarantadue";

	std::cout << "BEFORE: " << std::endl;
	std::cout << hello->str << std::endl;
	std::cout << hello->a << std::endl;

	uintptr_t	serial = serialize(hello);
	std::cout << "AFTER: " << std::endl;

	std::cout << "SERIAL " << serialize(hello) << std::endl;
	std::cout << deserialize(serialize(hello)) << std::endl;
	std::cout << "DESERIAL " << deserialize(serial) << std::endl;
}
