#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const std::string&);
	WrongAnimal(const WrongAnimal&);
	WrongAnimal& operator=(const WrongAnimal&);
	~WrongAnimal();

	void makeSound(void);
	std::string getType(void);
};

#endif