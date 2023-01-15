#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <exception>
# include <vector>
# include <numeric>
# include <cstdlib>

class Span
{
	private:
		std::vector<int>	v;
		unsigned int		size;

	protected:
		;

	public:
		Span();
		Span(const Span &span);
		Span(unsigned int n);
		~Span();

	Span	&operator=(const Span &span);
	void	addNumber(int n);
	void	addIter(const std::vector<int>::iterator& start, const std::vector<int>::iterator& end);
	unsigned int		shortestSpan() const;
	unsigned int		longestSpan() const;

	class NoSpanException : std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("No span found.");
			}
	};

	class FullSpanException : std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("Span is full.");
			}
	};
};

#endif
