#include "Ice.hpp"

Ice::Ice(void) : type("ice")
{
	std::cout << "[DEBUG] Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& i) : type(i.type)
{
	std::cout << "[DEBUG] Ice copy constructor called" << std::endl;
}

Ice&	Ice::operator=(const Ice& i)
{
	std::cout << "[DEBUG] Ice copy assignment operator called" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "[DEBUG] Ice destructor called" << std::endl;
}

AMateria*	Ice::clone(void) const
{
	std::cout << "[DEBUG] Ice clone member function called" << std::endl;
	return (new Ice(*this));
}

void	Ice::use(ICharacter& ic) 
{
	std::cout << "[DEBUG] Ice use member function called" << std::endl;
	std::cout << "[INFO] * shoots an ice bolt at " << ic.getName() << " *" << std::endl;
}
