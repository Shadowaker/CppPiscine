#include "easyfind.hpp"

void print(int i)
{
	std::cout << i << std::endl;
}

int main()
{
	std::list<int> list;
	std::vector<int> vector;

	for (int i = 0; i <= 42; i++)
		vector.push_back(i);
	std::cout << "Vector range(0, 42)" << std::endl;
	try
	{
		int	tf = 21;
		std::cout << "Item : " << tf << " ";
		std::vector<int>::iterator it_vector = easyfind(vector, tf);
		std::cout << "-> Found" << std::endl;

		tf = 45;
		std::cout << "Item : " << tf << " ";
		it_vector = easyfind(vector, tf);
		std::cout << "-> Found" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	for (int i = 0; i <= 42; i++)
		list.push_back(i);

	std::cout << "List range(0, 42)" << std::endl;
	try
	{
		int	tf = 17;
		std::cout << "Item : " << tf << " ";
		std::list<int>::iterator it_list = easyfind(list, tf);
		std::cout << "-> Found" << std::endl;

		tf = 45;
		std::cout << "Item : " << tf << " ";
		it_list = easyfind(list, tf);
		std::cout << "-> Found" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
