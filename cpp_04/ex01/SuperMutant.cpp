#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant"){
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& other){
	*this = other;
	std::cout << "Copy SuperMutant constructor was called!" << std::endl;
}

SuperMutant::~SuperMutant(){
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant & SuperMutant::operator=( const SuperMutant& other ){
	std::cout << "Assignation PlasmaRifle constructor was called!" << std::endl;
	this->_type = other._type;
	this->_hp = other._hp;
	return (*this);
}

void SuperMutant::takeDamage(int damage){
	damage -= 3;
	if (damage >= 0){
		_hp -= damage;
	}
}
