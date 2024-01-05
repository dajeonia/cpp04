#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") { 
	std::cout << "Dog Default constructor called" << std::endl;
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

Dog::~Dog(void) {
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "멍무엉멍멍" << std::endl;
}
