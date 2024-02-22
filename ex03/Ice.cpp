#include "Ice.hpp"
#include "Character.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "[DEBUG] Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& i) : AMateria(i.type)
{
	std::cout << "[DEBUG] Ice copy constructor called" << std::endl;
}

Ice&	Ice::operator=(const Ice& i)
{
	std::cout << "[DEBUG] Ice copy assignment operator called" << std::endl;
	(void)i;
	return (*this);
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

void	Ice::use(ICharacter& target) 
{
	std::cout << "[DEBUG] Ice use member function called" << std::endl;
	std::cout << "\033[32m" << "[INFO] * shoots an ice bolt at " << target.getName() << " *" << "\033[0m" << std::endl;
}
