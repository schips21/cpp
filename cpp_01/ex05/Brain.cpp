#include "Brain.hpp"

Brain::Brain(): brain_name("def_brain"){
	std::cout << "Brain " << brain_name << " is here!" << std::endl;
}

Brain::~Brain(){
	std::cout << "Brain " << brain_name << " has gone away!" << std::endl;
}

std::string Brain::identify() const {
	std::stringstream ptr;
	ptr << this;
	return (ptr.str());
}
