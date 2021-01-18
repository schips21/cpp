#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain {
private:
	std::string	brain_name;
public:
	Brain();
	~Brain();
	std::string	identify() const;
};

#endif