#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") { 
	brain = new Brain;
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog& d) : Animal(d) {
	brain = new Brain(*d.brain);
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& d)
{
	if (this != &d)
	{
		this->type = d.type;
		*brain = *d.brain;
	}
	std::cout << "Dog Copy assignment operation called" << std::endl;
	return (*this);
}

Dog::~Dog(void) {
	delete brain;
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog: " << "멍무엉멍멍" << std::endl;
}

void	Dog::think(int index, std::string idea) const
{
	brain->setIdea(index, idea);
	std::cout << "Dog: (think about something)" << std::endl;
}

void	Dog::speak(int index) const
{
	if (brain->getIdea(index) == "")
		std::cout << "Dog: " << "멍무엉멍멍" << std::endl;
	else
		std::cout << "Dog: " << brain->getIdea(index) << std::endl;
}
