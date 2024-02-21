#include <iostream>
#include "AMateria.hpp"

class Ice : AMateria {
public:
	Ice();
	Ice(const AMateria&);
	Ice& operator=(const AMateria&);
	virtual ~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
}
