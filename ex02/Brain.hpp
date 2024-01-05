#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain {
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain&);
	~Brain();
	Brain& operator=(const Brain&);

	std::string getIdea(int) const;
	void setIdea(int, const std::string);
};

#endif
