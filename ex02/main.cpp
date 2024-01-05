#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void	check_leaks(void) { system("leaks -q a.out"); }

int	main(void)
{
	atexit(check_leaks);
	std::cout << "=========================================== 생성자" << std::endl;

	// const Animal* meta = new Animal(); // Error: 추상 클래스 초기화 시도
	const Animal* i = new Dog(); // Default Case
	const Animal* j = new Cat();

	std::cout << "============================================= 구현" << std::endl;

	j->think(56, "밥 차려라");
	i->think(56, "밥 주세요 ㅎㅎ");
	j->speak(56);
	i->speak(56);

	i->speak(55); // 생각 안 한 공간

	std::cout << "=========================================== 소멸자" << std::endl;

	delete i;
	delete j;

	std::cout << "============================================= 종료" << std::endl;

	return (0);
}
