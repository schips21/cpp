#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human {
private:
	const Brain hum_brain;
public:
	Human();
	~Human();
	std::string	identify() const;
	const Brain& getBrain() const;
};

#endif