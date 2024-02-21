#ifndef NODE_HPP
# define NODE_HPP
# include <cstdlib>

class Node {
	void* content;
	Node* next;
public:
	Node();
	Node(void*);
	Node(Node&);
	Node& operator=(Node&);
	~Node();

	void* getContent(void) const;
	Node* getNext(void) const;
	void setContent(void*);
	void setNext(Node*);
};

#endif
