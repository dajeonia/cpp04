#include "Animal.hpp"

Animal::Animal(void) : type() {
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal& a) : type(a.type) {
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal::~Animal(void) {
	std::cout << "Animal Destructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& a)
{
	if (this != &a)
		this->type = a.type;
	std::cout << "Animal Copy assignment operation called" << std::endl;
	return (*this);
}

Animal::Animal(const std::string& _type) : type(_type) {
	std::cout << "Animal String assignment operation called" << std::endl;
}

std::string	Animal::getType(void) const { return (type); }

/* 얘네들을 이제 정의하지 않아도 된다!
void	Animal::makeSound(void) const
{
	std::cout << "(no sound)" << std::endl;
}

void	Animal::think(int index, std::string idea) const
{
	(void)index;
	(void)idea;
	std::cout << "Animal: (no idea)" << std::endl;
}

void	Animal::speak(int index) const
{
	(void)index;
	std::cout << "Animal: (no sound)" << std::endl;
}
*/
