#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") { 
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat& d) : Animal(d) {
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& d) {
	if (this != &d)
		this->type = d.type;
	std::cout << "Cat Copy assignment operation called" << std::endl;
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "냥냐냐냔냥" << std::endl;
}
