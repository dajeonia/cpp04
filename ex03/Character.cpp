#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void) : name(), slot()
{
	std::cout << "[DEBUG] Character default constructor called" << std::endl;
}
Character::Character(const std::string& _name) : name(_name), slot()
{
	std::cout << "[DEBUG] Character string constructor called" << std::endl;
}

Character::Character(const Character& c) : name(c.name), slot()
{
	std::cout << "[DEBUG] Character copy constructor called" << std::endl;
	for (int i=0; i!=4; ++i) { /* inordered */
		if (c.slot[i])
			slot[i] = c.slot[i]->clone();
	}
}

Character&	Character::operator=(const Character& c)
{
	std::cout << "[DEBUG] Character copy assignment operator called" << std::endl;
	if (&c == this)
		return (*this);
	for (int i=0; i!=4; ++i) { /* delete */
		if (slot[i]) {
			delete slot[i];
			slot[i] = NULL;
		}
	}
	for (int i=0; i!=4; ++i) { /* deep(clone) copy */
		if (c.slot[i])
			slot[i] = c.slot[i]->clone();
	}
	return (*this);
}

Character::~Character(void)
{
	std::cout << "[DEBUG] Character destructor called" << std::endl;
	for (int i=0; i!=4; ++i) { /* inordered */
		if (slot[i]) {
			delete slot[i]; /* delete */
			slot[i] = NULL; /* treat a dangling pointer */
		}
	}
}

const std::string&	Character::getName(void) const
{
	// std::cout << "[DEBUG] Character getName member function called" << std::endl;
	return (name);
}

void	Character::equip(AMateria* m)
{
	std::cout << "[DEBUG] Character equip member function called" << std::endl;
	if (!m) {
		std::cout << "\033[33m" << "[ERROR] equip(): Invalid item" << "\033[0m" << std::endl;
		return ;
	}
	for (int i=0; i!=4; ++i) {
		if (!slot[i]) {
			slot[i] = m;
			std::cout << "\033[32m" << "[INFO] equip(): User '" << name << "' equiped '" << slot[i]->getType() << "' at slot " << i << "\033[0m" << std::endl;
			return ;
		}
	}
	std::cout << "\033[33m" << "[ERROR] equip(): there is not enough space" << "\033[0m" << std::endl;
}

void	Character::unequip(int idx)
{
	std::cout << "[DEBUG] Character unequip member function called" << std::endl;
	if (0 <= idx && idx < 4)
	{
		if (slot[idx]) {
			std::cout << "\033[32m" << "[INFO] unequip(): User '" << name << "' dropped '" << slot[idx]->getType() << "' at slot " << idx << "\033[0m" << std::endl;
			slot[idx] = NULL;
		}
	}
	else
		std::cout << "\033[33m" << "[ERROR] unequip(): Invalid index" << "\033[0m" << std::endl;
}

void 	Character::use(int idx, ICharacter& target)
{
	std::cout << "[DEBUG] Character use member function called" << std::endl;
	if (0 <= idx && idx < 4 && slot[idx])
		slot[idx]->use(target);
	else
		std::cout << "\033[33m" << "[ERROR] use(): Invalid index" << "\033[0m" << std::endl;
}

// std::cout << "[INFO] use: " << idx << "'th slot's item is activated" << std::endl;
/*
for (int i=0; i!=4; ++i)
	std::cout << "[DEBUG] slot[" << i << "]: " << slot[i] << std::endl;
*/
