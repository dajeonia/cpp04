#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

/* 추상 클래스: 하나 이상의 순수 가상 함수가 존재하는 클래스
   순수 지정자(=0)을 지정하면 순수 가상 함수가 된다. */

class Animal {
protected:
	std::string type;
public:
	Animal();
	Animal(const std::string&);
	Animal(const Animal&);
	Animal& operator=(const Animal&);
	virtual ~Animal();

	virtual void makeSound(void) const =0;
	std::string getType(void) const;

	virtual void think(int, std::string) const =0;
	virtual void speak(int) const =0;
};

#endif
