#ifndef FLOOR_HPP
# define FLOOR_HPP

#include "Node.hpp"

class Floor {
	Node* head;
public:
	Floor();
	Floor(Floor&);
	Floor& operator=(Floor&);
	~Floor();

	void addBack(AMatera*);
	void clear(void);
}

#endif
