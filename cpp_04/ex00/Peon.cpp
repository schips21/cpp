#include "Peon.hpp"

Peon::Peon(){
	std::cout << "There is default Peon constructor which won't be called!" << std::endl;
}

Peon::Peon(std::string name) : Victim(name){
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon& other){
	*this = other;
	std::cout << "Copy Peon constructor was called!" << std::endl;
}

Peon::~Peon(){
	std::cout << "Bleuark..." << std::endl;
}

Peon & Peon::operator=( const Peon& other ){
	std::cout << "Assignation Peon constructor was called!" << std::endl;
	this->_name = other._name;
	return (*this);
}

void Peon::getPolymorphed() const{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}