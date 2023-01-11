
#include "Brain.hpp"

Brain::Brain()
{
	this->size = 0;
	std::cout << CYAN "[BRAIN] " BLANK "Brain was developed!" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	*this = brain;
	std::cout << CYAN "[BRAIN] " BLANK "Brain was developed!" << std::endl;
}

Brain::~Brain()
{
	std::cout << CYAN "[BRAIN] " BLANK "Too much alcohol..." << std::endl;
}

void	Brain::newIdea(std::string idea)
{
	this->ideas[this->size] = idea;
	this->size++;
}

std::string	*Brain::getIdeas()
{
	return (this->ideas);
}
