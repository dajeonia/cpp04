#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "[DEBUG] Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure& i) : AMateria(i.type)
{
	std::cout << "[DEBUG] Cure copy constructor called" << std::endl;
}

Cure&	Cure::operator=(const Cure& i)
{
	std::cout << "[DEBUG] Cure copy assignment operator called" << std::endl;
	(void)i;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "[DEBUG] Cure destructor called" << std::endl;
}

AMateria*	Cure::clone(void) const
{
	std::cout << "[DEBUG] Cure clone member function called" << std::endl;
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target) 
{
	std::cout << "[DEBUG] Cure use member function called" << std::endl;
	std::cout << "\033[32m" << "[INFO] * heals " << target.getName() << "'s wounds *" << "\033[0m" << std::endl;
}
