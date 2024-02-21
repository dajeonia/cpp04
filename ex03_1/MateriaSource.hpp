#include "ImateriaSource.hpp"

class MateriaSource {
	AMateria* table[4];
public:
	MateriaSource();
	~MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(const std::string& type);
};
