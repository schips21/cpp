#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50){
//	std::cout << "There is default PowerFist constructor" << std::endl;
}

PowerFist::PowerFist(const PowerFist& other){
	*this = other;
	std::cout << "Copy PowerFist constructor was called!" << std::endl;
}

PowerFist::~PowerFist(){
	std::cout << "PowerFist " << _name << " just died!" << std::endl;
}

PowerFist & PowerFist::operator=( const PowerFist& other ){
	std::cout << "Assignation PowerFist constructor was called!" << std::endl;
	this->_name = other._name;
	this->_apcost = other._apcost;
	this->_damage = other._damage;
	return (*this);
}

void PowerFist::attack() const{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
