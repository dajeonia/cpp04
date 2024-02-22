#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria(void) : type()
{
	std::cout << "[DEBUG] AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& a) : type(a.type)
{
	std::cout << "[DEBUG] AMateria copy constructor called" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& a)
{
	(void)a;
	std::cout << "[DEBUG] AMateria copy assignment operator called" << std::endl;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "[DEBUG] AMateria destructor called" << std::endl;
}

AMateria::AMateria(const std::string& _type) : type(_type)
{
	std::cout << "[DEBUG] AMateria string constructor called" << std::endl;
}

const std::string&	AMateria::getType(void) const
{
	// std::cout << "[DEBUG] AMateria getType member function called" << std::endl;
	return (type);
}

void	AMateria::use(ICharacter& target) 
{
	std::cout << "[DEBUG] AMateria use member function called" << std::endl;
	std::cout << "[INFO ] * Unknown item used to " << target.getName() << " *" << std::endl;
}
