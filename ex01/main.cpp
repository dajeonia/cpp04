#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void	check_leaks(void) { system("leaks -q a.out"); }

int	main(void)
{
	atexit(check_leaks);
	std::cout << "=========================================== 생성자" << std::endl;

	const Animal* i = new Dog(); // Default Case
	const Animal* j = new Cat();

	std::cout << "============================================= 구현" << std::endl;

	j->think(56, "밥 차려라");
	i->think(56, "밥 주세요 ㅎㅎ");
	j->speak(56);
	i->speak(56);

	i->speak(155); // 범위 초과
	j->speak(55); // 생각 안 한 공간

	std::cout << "=========================================== 소멸자" << std::endl;

	delete i;
	delete j;

	std::cout << "============================================= 종료" << std::endl;

	return (0);

	/* 
	Dog a;
	a.think(5, "배고파");
	Dog c;
	c = a; // 복사 대입 연산자
	a.think(5, "배불러");
	a.speak(5);
	c.speak(5);
	*/

	/* 
	Dog a;
	a.think(5, "배고파");
	Dog c(a); // 복사 생성자
	a.think(5, "배불러");
	a.speak(5);
	c.speak(5);
	*/
}
