
#include "StoAll.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << RED "Wrong arguments!" BLANK << std::endl;
		return (1);
	}
	StoAll conv(argv[1]);

	std::cout << conv << std::endl;
}
