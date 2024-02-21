#include "Floor.hpp"

Floor::Floor() : head(NULL)
{
	std::cout << "Floor default constructor called" << std::endl;
}

Floor::Floor(Floor& f) : head(f.head)
{
	std::cout << "Floor copy constructor called" << std::endl;
}

Floor&	operator=(Floor& f)
{
	if (this != &f)
		head = f.head;
	std::cout << "Floor copy assignment operator called" << std::endl;
	return (*this);
}

Floor::~Floor()
{
	std::cout << "Floor destructor called" << std::endl;
}

void	Floor::addBack(AMatera* am)
{
	if (head == NULL)
		head = new Node(am);
	else
	{
		Node* tmp = head;
		while (tmp->getNext())
			tmp = tmp->getNext();
		tmp.setNext(new Node(am));
	}
}

void	Floor::clear(void)
{
	while (head)
	{
		Node* tmp = head;
		head = head->getNext();
		delete (AMatera*) tmp->getContent();
		delete tmp;
	}
}
