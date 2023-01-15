
#include <iostream>
#include <stack>
#include <list>

#define RED	"\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"
#define MAGENTA "\033[95m"
#define BLANK "\033[0m"
#define CYAN "\033[96m"

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack() : MutantStack<T, Container>::stack() {};
		MutantStack(const MutantStack<T, Container>& other) : MutantStack<T, Container>::stack(other) {};
		virtual ~MutantStack() {};

	MutantStack<T, Container>& operator=(const MutantStack<T, Container>& rhs)
	{
		if (this != &rhs)
			this->MutantStack<T, Container>::stack::operator=(rhs);
		return *this;
	}

	typedef typename Container::iterator				iterator;
	typedef typename Container::reverse_iterator		reverse_iterator;

	iterator			begin() { return this->c.begin(); };
	iterator			end() { return this->c.end(); };
	reverse_iterator	rbegin() { return this->c.rbegin(); };
	reverse_iterator	rend() { return this->c.rend(); };
};
