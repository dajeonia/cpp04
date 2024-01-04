#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("") {
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& a) : type(a.type) {
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& a)
{
	if (this != &a)
		this->type = a.type;
	std::cout << "WrongAnimal Copy assignment operation called" << std::endl;
	return (*this);
}

WrongAnimal::WrongAnimal(const std::string& _type) : type(_type) {
	std::cout << "WrongAnimal String assignment operation called" << std::endl;
}

void	WrongAnimal::makeSound(void)
{
	std::cout << "(no sound)" << std::endl;
}

std::string	WrongAnimal::getType(void) { return (type); }
