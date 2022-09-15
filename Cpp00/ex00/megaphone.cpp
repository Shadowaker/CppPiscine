#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int x=1; argv[x] != NULL; x++ )
		{
			for (size_t y=0; y < strlen(argv[x]); y++)
				putchar(toupper(argv[x][(int) y]));
		}
	}
	return 0;
}
