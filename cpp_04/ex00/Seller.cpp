#include "Seller.hpp"

Seller::Seller(){
	std::cout << "There is default Seller constructor which won't be called!" << std::endl;
}

Seller::Seller(std::string name) : Victim(name){
	std::cout << "Hello!" << std::endl;
}

Seller::Seller(const Seller& other){
	*this = other;
	std::cout << "Copy Seller constructor was called!" << std::endl;
}

Seller::~Seller(){
	std::cout << "Goodbye..." << std::endl;
}

Seller & Seller::operator=( const Seller& other ){
	std::cout << "Assignation Seller constructor was called!" << std::endl;
	this->_name = other._name;
	return (*this);
}

void Seller::getPolymorphed() const{
	std::cout << _name << " has been turned into a white dog!" << std::endl;
}
