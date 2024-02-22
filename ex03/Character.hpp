#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <string>
# include "ICharacter.hpp"
# include "List.hpp"

class AMateria;

class Character : public ICharacter {
	const std::string name;
	AMateria* slot[4];
	List dropped;
public:
	Character();
	Character(const std::string&);
	Character(const Character&);
	Character& operator=(const Character&);
	~Character();

	const std::string& getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif
