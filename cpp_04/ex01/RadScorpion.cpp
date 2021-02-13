#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion"){
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& other){
	*this = other;
	std::cout << "Copy RadScorpion constructor was called!" << std::endl;
}

RadScorpion::~RadScorpion(){
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion & RadScorpion::operator=( const RadScorpion& other ){
	std::cout << "Assignation RadScorpion constructor was called!" << std::endl;
	this->_type = other._type;
	this->_hp = other._hp;
	return (*this);
}
