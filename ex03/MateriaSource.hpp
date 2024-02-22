#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	AMateria* slot[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource&);
	MateriaSource& operator=(const MateriaSource&);
	~MateriaSource();

	void learnMateria(AMateria*);
	AMateria* createMateria(const std::string& type);
};

#endif
