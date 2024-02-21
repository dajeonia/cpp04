#include "Character.hpp"

Character::Character(const std::string& _n) : name(_n), inventory()
{
	std::cout << "[DEBUG] Character std::string constructor called" << std::endl;
}

Character::~Character(void)
{
	std::cout << "[DEBUG] Character destructor called" << std::endl;
}

const std::string&	Character::getName(void) const
{
	std::cout << "[DEBUG] Character \"getName\" member function called" << std::endl;
	return (name);
}

void	Character::equip(AMateria* m)
{
	std::cout << "[DEBUG] Character \"equip\" member function called" << std::endl;
	for (int i; i!=4; ++i) {
		if (!inventory[i])
			inventory[i] = m;
	}
}

void	Character::unequip(int idx)
{
	std::cout << "[DEBUG] Character \"unequip\" member function called" << std::endl;
	if (1 <= i && i <= 4)
	{
		if (inventory[i - 1]) {
			std::cout << "[INFO] \"unequip\": " << i << "'th slot's item is dropped" << std::endl;
			inventory[i - 1] = NULL;
		}
	}
	else
		std::cerr << "[ERROR] \"unequip\": Invalid index" << std::endl;
}

void 	Character::use(int idx, ICharacter& target)
{
	std::cout << "[DEBUG] Character \"use\" member function called" << std::endl;
	if (1 <= i && i <= 4)
	{
		if (inventory[i - 1]) {
			std::cout << "[INFO] \"use\": " << i << "'th slot's item is activated" << std::endl;
			inventory[i - 1].use();
		}
		else
			std::cout << "[INFO] \"use\": " << i << "'th slot's item is emptied" << std::endl;
	}
	else
		std::cerr << "[ERROR] \"use\": Invalid index" << std::endl;
}
