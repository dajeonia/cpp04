#include "AMateria.hpp"

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
	std::cout << "[DEBUG] AMateria copy assignment operator called" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "[DEBUG] AMateria destructor called" << std::endl;
}

AMateria::AMateria(const std::string& _type) : type(_type)
{
	std::cout << "[DEBUG] AMateria type(std::string) constructor called" << std::endl;
}

const std::string&	getType(void) const
{
	std::cout << "[DEBUG] AMateria getType member function called" << std::endl;
	return (type);
}

void	AMateria::use(ICharacter& ic) 
{
	std::cout << "[DEBUG] AMateria use member function called" << std::endl;
}
