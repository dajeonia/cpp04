#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal {
protected:
	std::string type;
public:
	Animal();
	Animal(const std::string&);
	Animal(const Animal&);
	Animal& operator=(const Animal&);
	virtual ~Animal();

	virtual void makeSound(void) const;
	std::string getType(void) const;

	virtual void think(int, std::string) const;
	virtual void speak(int) const;
};

#endif
