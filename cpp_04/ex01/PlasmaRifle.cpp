#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21){
//	std::cout << "There is default PlasmaRifle constructor" << std::endl;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& other){
	*this = other;
	std::cout << "Copy PlasmaRifle constructor was called!" << std::endl;
}

PlasmaRifle::~PlasmaRifle(){
	std::cout << "PlasmaRifle " << _name << " just died!" << std::endl;
}

PlasmaRifle & PlasmaRifle::operator=( const PlasmaRifle& other ){
	std::cout << "Assignation PlasmaRifle constructor was called!" << std::endl;
	this->_name = other._name;
	this->_apcost = other._apcost;
	this->_damage = other._damage;
	return (*this);
}

void PlasmaRifle::attack() const{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
