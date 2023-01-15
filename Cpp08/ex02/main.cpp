#include "MutantStack.hpp"

int	main()
{
	MutantStack<int> mstack;
	std::list<int> l;


	mstack.push(5);
	mstack.push(17);
	std::cout << GREEN "Printing last inserted STACK values:\n";
	std::cout << "[" CYAN << mstack.top() << GREEN "]" << std::endl;

	l.push_back(5);
	l.push_back(17);
	std::cout << GREEN "Printing first inserted LIST values:\n";
	std::cout << "[" CYAN << l.back() << GREEN "]" << std::endl << std::endl;

	std::cout << GREEN "Popping first STACK values:\n";
	mstack.pop();

	std::cout << GREEN "Popping last LIST values:\n\n";
	l.pop_back();

	std::cout << GREEN "Printing STACK size:\n";
	std::cout << "[" CYAN << mstack.size() << GREEN "]" << std::endl;
	std::cout << GREEN "Printing LIST size:\n";
	std::cout << "[" CYAN << l.size() << GREEN "]" << std::endl << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	l.push_back(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	std::cout << GREEN "Using iterators to print STACK values:\n";
	while (it != ite)
	{
		std::cout << "[" CYAN << *it << GREEN "] " ;
		++it;
	}

	std::list<int>::iterator itl = l.begin();
	std::list<int>::iterator itel = l.end();

	++itl;
	--itl;
	std::cout << GREEN "\nUsing iterators to print LIST values:\n";
	while (itl != itel)
	{
		std::cout << "[" CYAN << *itl << GREEN "] " ;
		++itl;
	}

	return 0;
}
