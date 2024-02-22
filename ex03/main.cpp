#include <iostream>
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void	leaks(void)
{
	system("leaks -q a.out");
}

int main(void) /* subject */
{
	atexit(leaks);

	std::cout << "==================================================" << std::endl;
	IMateriaSource* src = new MateriaSource();

	std::cout << "==================================================" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	/* slot(Learn) 초과
	std::cout << "====TEST==========================================" << std::endl;
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure()); // Error: 슬롯이 가득 찼음
	*/

	std::cout << "==================================================" << std::endl;
	ICharacter* me = new Character("me");

	std::cout << "==================================================" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	/* unequip()
	std::cout << "====TEST==========================================" << std::endl;
	tmp = src->createMateria("cure");
	me->unequip(2);
	me->equip(tmp);
	*/

	/* createMateria(): no type
	std::cout << "====TEST==========================================" << std::endl;
	tmp = src->createMateria("fire");
	me->equip(tmp);
	*/

	/* 1. MateriaSource copy constructor
	std::cout << "====TEST==========================================" << std::endl;
	MateriaSource mtest((MateriaSource&)*src);
	tmp = mtest.createMateria("ice");
	me->equip(tmp);

	*/
	/* 1.1. MateriaSource copy constructor
	std::cout << "====TEST==========================================" << std::endl;
	IMateriaSource* mtest = new MateriaSource((MateriaSource&)*src);
	tmp = mtest->createMateria("ice");
	me->equip(tmp);
	delete mtest;
	*/

	/* 2. MateriaSource copy assignment operator
	std::cout << "====TEST==========================================" << std::endl;
	MateriaSource mtest;
	tmp = mtest.createMateria("ice"); // Error: No type
	mtest = (MateriaSource&)*src;
	tmp = mtest.createMateria("ice");
	me->equip(tmp);
	*/

	/* slot(Equip) 초과
	std::cout << "====TEST==========================================" << std::endl;
	tmp = src->createMateria("cure"); me->equip(tmp);
	tmp = src->createMateria("cure"); me->equip(tmp);
	tmp = src->createMateria("cure"); me->equip(tmp); // 초과됨. 주소를 잃어버리지 말고, 삭제해주자.
	delete tmp;
	*/

	std::cout << "==================================================" << std::endl;
	ICharacter* bob = new Character("bob");

	/* 1. Character copy constructor
	std::cout << "====TEST==========================================" << std::endl;
	Character test1 = (Character&)*me;
	// Character test1((Character&)*me); // 동일하다
	test1.use(0, *me);
	test1.use(1, *me);
	*/

	/* 2. Character copy assignment operator
	std::cout << "====TEST==========================================" << std::endl;
	Character test2;
	test2 = (Character&)*me;
	test2.use(0, *me);
	test2.use(1, *me);
	*/

	std::cout << "==================================================" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	// me->use(2, *bob); // Error: 슬롯에 아이템이 존재하지 않음.

	std::cout << "==================================================" << std::endl;
	delete bob;
	delete me;

	std::cout << "==================================================" << std::endl;
	delete src;

	std::cout << "==================================================" << std::endl;
	return 0;
}
