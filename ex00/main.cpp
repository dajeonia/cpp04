#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

/*
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"
*/

int	main(void)
{
	const Animal* meta = new Animal(); // Default Case
	const Animal* i = new Dog();
	const Animal* j = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	/*
	const WrongAnimal* meta = new WrongAnimal(); // Wrong Case
	const WrongAnimal* i = new WrongDog();
	const WrongAnimal* j = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;
	*/

	return (0);
}
