#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : inventory()
{
	std::cout << "[DEBUG] MateriaSource default constructor called" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	/* delete inventory... */
	std::cout << "[DEBUG] MateriaSource destructor called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	std::cout << "[DEBUG] MateriaSource member function \"learnMateria\" called" << std::endl;
	for (int i=0; i!=4; ++i) {
		if (!inventory[i]) {
			inventory[i] = m;
			return ;
		}
	}
	std::cout << "[INFO] \"learnMateria\": inventory fulled" << std::endl;
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	std::cout << "[DEBUG] MateriaSource member function \"createMateria\" called" << std::endl;
	for (int i=0; i!=4 && inventory[i]; ++i) { /* finding ... */
		/* save the information of ... */
		if (inventory[i].getType() == type)
			return (inventory[i].clone());
	}
	std::cout << "[INFO] \"createMateria\": type doesn't exist" << std::endl;
}
