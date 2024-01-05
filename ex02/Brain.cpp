#include "Brain.hpp"

Brain::Brain() : ideas() {
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain& b) {
	for (int i=0; i!=100; ++i)
		ideas[i] = b.ideas[i];
	std::cout << "Brain Copy constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain Destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& b)
{
	if (this == &b)
		return (*this);
	for (int i=0; i!=100; ++i)
		ideas[i] = b.ideas[i];
	std::cout << "Brain Copy assignment operator called" << std::endl;
	return (*this);
}

std::string Brain::getIdea(int index) const
{
	if (0 <= index && index <= 99)
		return (ideas[index]);
	else
		return ("(invalid idea)");
}

void Brain::setIdea(int index, const std::string idea)
{
	ideas[index] = idea;
}
