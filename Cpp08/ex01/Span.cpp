#include "Span.hpp"

Span::Span() : size(0)
{
	std::cout << "Constructor Called." << std::endl;
}

Span::Span(unsigned int n) : size(n)
{
	std::cout << "Constructor Called." << std::endl;
}

Span::Span(const Span& span)
{
	this->v = span.v;
	this->size = span.size;
	std::cout << "Copy constructor Called." << std::endl;
}

Span::~Span()
{
}

Span& Span::operator=(const Span& span)
{
	if (this != &span)
	{
		this->v = span.v;
		this->size = span.size;
	}
	return *this;
}

void Span::addNumber(int n)
{
	if (this->v.size() >= this->size)
		throw (Span::FullSpanException());
	this->v.push_back(n);
}

void Span::addIter(const std::vector<int>::iterator& start, const std::vector<int>::iterator& end)
{
	int d = std::distance(start, end);
	if (d + this->v.size() > this->size)
	{
		this->v.insert(this->v.end(), start, start + (this->size - this->v.size()));
		throw (Span::FullSpanException());
	}
	else
		this->v.insert(this->v.end(), start, end);
}

unsigned int Span::shortestSpan() const
{
	std::vector<int> tmp;

	int (*i)(int) = &std::abs;
	if (this->v.size() <= 1)
		throw (Span::NoSpanException());

	std::adjacent_difference(this->v.begin(), this->v.end(), std::back_inserter(tmp));
	std::transform(tmp.begin(), tmp.end(), tmp.begin(), i);
	return *min_element(tmp.begin(), tmp.end());
}

unsigned int Span::longestSpan() const
{
	std::vector<int> tmp;

	int (*i)(int) = &std::abs;
	if (this->v.size() <= 1)
		throw (Span::NoSpanException());

	std::adjacent_difference(this->v.begin(), this->v.end(), std::back_inserter(tmp));
	std::transform(tmp.begin(), tmp.end(), tmp.begin(), i);
	return *max_element(tmp.begin(), tmp.end());
}
