#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") { 
	brain = new Brain;
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::~Dog(void) {
	delete brain;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog& d) : Animal(d) {
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& d) {
	if (this != &d)
		this->type = d.type;
	std::cout << "Dog Copy assignment operation called" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "멍무엉멍멍" << std::endl;
}

void	Dog::think(int index, std::string idea) const
{
	brain->setIdea(index, idea);
	std::cout << "Dog: (think about something)" << std::endl;
}

void	Dog::speak(int index) const
{
	std::cout << "Dog: " << brain->getIdea(index) << std::endl;
}
