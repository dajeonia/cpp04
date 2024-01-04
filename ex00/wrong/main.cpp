#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	WrongAnimal *a = new WrongCat;

	std::cout << a->getType() << " " << std::endl;
	a->makeSound();
	std::cout << b->getType() << " " << std::endl;
	b->makeSound();
	return (0);
}
