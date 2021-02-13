#include "Knife.hpp"

Knife::Knife() : AWeapon("Knife", 5, 30){
//	std::cout << "There is default Knife constructor" << std::endl;
}

Knife::Knife(const Knife& other){
	*this = other;
	std::cout << "Copy Knife constructor was called!" << std::endl;
}

Knife::~Knife(){
	std::cout << "Knife " << _name << " just died!" << std::endl;
}

Knife & Knife::operator=( const Knife& other ){
	std::cout << "Assignation Knife constructor was called!" << std::endl;
	this->_name = other._name;
	this->_apcost = other._apcost;
	this->_damage = other._damage;
	return (*this);
}

void Knife::attack() const{
	std::cout << "* khryaas... *" << std::endl;
}
