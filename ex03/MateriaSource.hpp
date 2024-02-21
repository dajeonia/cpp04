#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	AMateria* inventory[4];
public:
	MateriaSource() { }
	~MateriaSource()
	void learnMateria(AMateria*);
	AMateria* createMateria(const std::string& type);
private:
	MateriaSource(const MateriaSource&) { }
	MateriaSource& operator=(const MateriaSource&) { } // Error ...?
}
