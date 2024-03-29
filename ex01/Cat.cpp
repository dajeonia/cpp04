#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), brain(new Brain()) { 
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat& d) : Animal(d), brain(new Brain(*d.brain)) {
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& d)
{
	if (this != &d)
	{
		this->type = d.type;
		*brain = *d.brain;
	}
	std::cout << "Cat Copy assignment operation called" << std::endl;
	return (*this);
}

Cat::~Cat(void) {
	delete brain;
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat: " << "냥냐냐냔냥" << std::endl;
}

void	Cat::think(int index, std::string idea) const
{
	brain->setIdea(index, idea);
	std::cout << "Cat: (think about something)" << std::endl;
}

void	Cat::speak(int index) const
{
	if (brain->getIdea(index) == "")
		std::cout << "Cat: " << "냥냐냐냔냥" << std::endl;
	else
		std::cout << "Cat: " << brain->getIdea(index) << std::endl;
}
