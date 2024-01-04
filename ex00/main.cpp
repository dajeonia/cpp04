#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"

int	main(void)
{
	Dog b;

	std::cout << b.getType() << " " << std::endl;
	b.makeSound();
	return (0);
}
