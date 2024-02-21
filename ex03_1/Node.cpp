#include "Node.hpp"

Node::Node() : content(NULL), next(NULL)
{
	std::cout << "Node default constructor called" << std::endl;
}

Node::Node(void* c) : content(c), next(NULL)
{
	std::cout << "Node constructor called" << std::endl;
}

Node::Node(const Node& n) : content(n.content), next(n.content)
{
	std::cout << "Node copy constructor called" << std::endl;
}

Node&	Node::operator=(const Node& n)
{
	if (this != &n)
	{
		content = n.content;
		next = n.next;
	}
	std::cout << "Node copy assignment operator called" << std::endl;

	return (*this);
}

Node::~Node()
{
	std::cout << "Node destructor called" << std::endl;
}

void*	Node::getContent(void) const { return (content); }

Node*	Node::getNext(void) const { return (next); }

void	Node::setContent(void* _content) { content = _content; }

void	Node::setNext(Node* _next) { next = _next; }
