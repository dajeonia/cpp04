#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>

class ICharacter;

class AMateria {
protected:
	const std::string type;
public:
	AMateria();
	AMateria(const std::string&);
	AMateria(const AMateria&);
	AMateria& operator=(const AMateria&);
	virtual ~AMateria();

	const std::string& getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
