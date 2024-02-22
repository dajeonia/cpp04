#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

MateriaSource::MateriaSource(void) : slot()
{
	std::cout << "[DEBUG] MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& s) : slot()
{
	std::cout << "[DEBUG] MateriaSource copy constructor called" << std::endl;
	for (int i=0; i!=4 && s.slot[i]; ++i) { /* ordered */
		slot[i] = s.slot[i]->clone(); /* deep copy */
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& s)
{
	std::cout << "[DEBUG] MateriaSource copy assignment operator called" << std::endl;
	if (&s == this)
		return (*this);
	for (int i=0; i!=4 && slot[i]; ++i) { /* ordered */
		delete slot[i]; /* delete */
		slot[i] = NULL; /* treat a dangling pointer */
	}
	for (int i=0; i!=4 && s.slot[i]; ++i) { /* ordered */
		slot[i] = s.slot[i]->clone(); /* deep copy */
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "[DEBUG] MateriaSource destructor called" << std::endl;
	for (int i=0; i!=4 && slot[i]; ++i) { /* ordered */
		delete slot[i]; /* delete */
		slot[i] = NULL; /* treat a dangling pointer */
	}
}

void	MateriaSource::learnMateria(AMateria* m)
{
	std::cout << "[DEBUG] MateriaSource member function learnMateria called" << std::endl;
	for (int i=0; i!=4; ++i) {
		if (!slot[i]) {
			slot[i] = m;
			std::cout << "\033[32m" << "[INFO] learnMateria(): learned '" << m->getType() << "' at slot " << i << "\033[0m" << std::endl;
			return ;
		}
	}
	std::cout << "\033[33m" << "[ERROR] learnMateria(): there is not enough space" << "\033[0m" << std::endl;
	delete m; // m은 new AMateria() 형식으로 들어온다. 
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	std::cout << "[DEBUG] MateriaSource member function createMateria called" << std::endl;
	for (int i=0; i!=4 && slot[i]; ++i) { /* finding */
		if (slot[i]->getType() == type) {
			std::cout << "\033[32m" << "[INFO] createMateria(): '" << slot[i]->getType() << "' is created " << "\033[0m" << std::endl;
			return (slot[i]->clone());
		}
	}
	std::cout << "\033[33m" << "[ERROR] createMateria(): type doesn't exist" << "\033[0m" << std::endl;
	return (NULL);
}

// 테스트
	/* 슬롯 확인
	for (int i=0; i!=4; ++i)
		std::cout << "[DEBUG] slot[" << i << "]: " << slot[i] << std::endl;
	*/
// std::cout << "s.slot[" << i << "]: " << s.slot[i] << std::endl;
