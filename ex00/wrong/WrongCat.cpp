#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") { 
	std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& d) : WrongAnimal(d) {
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& d) {
	if (this != &d)
		this->type = d.type;
	std::cout << "WrongCat Copy assignment operation called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat Destructor called" << std::endl;
}

void	WrongCat::makeSound(void)
{
	std::cout << "냥냐냐냔냥" << std::endl;
}
