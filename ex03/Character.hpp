#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include <string>

class Character : public ICharacter {
	const std::string name;
	AMateria* inventory[4];
public:
	Character(const std::string&);
	~Character();

	const std::string& getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
private:
	Character() { }
	Character(const Character&) { }
	Character& operator=(const Character&) { }
};

#endif
