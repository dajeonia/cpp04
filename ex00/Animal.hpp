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

	virtual void makeSound(void);
	std::string getType(void);
};

#endif
