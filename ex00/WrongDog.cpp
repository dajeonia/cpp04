#include "WrongDog.hpp"

WrongDog::WrongDog(void) : WrongAnimal("WrongDog") { 
	std::cout << "WrongDog Default constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog& d) : WrongAnimal(d) {
	std::cout << "WrongDog Copy constructor called" << std::endl;
}

WrongDog&	WrongDog::operator=(const WrongDog& d) {
	if (this != &d)
		this->type = d.type;
	std::cout << "WrongDog Copy assignment operation called" << std::endl;
	return (*this);
}

WrongDog::~WrongDog(void) {
	std::cout << "WrongDog Destructor called" << std::endl;
}

void	WrongDog::makeSound(void) const
{
	std::cout << "냥냐냐냔냥" << std::endl;
}
