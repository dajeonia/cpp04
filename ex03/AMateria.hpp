#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"
# include <iostream>

class AMateria {
protected:
	const std::string type;
public:
	AMateria();
	AMateria(const AMateria&);
	AMateria& operator=(const AMateria&);
	AMateria(const std::string&);
	virtual ~AMateria();

	const std::string& getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
