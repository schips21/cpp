#include "BigDog.hpp"

BigDog::BigDog() : Enemy(50, "Big Dog"){
	std::cout << "Gaaav!" << std::endl;
}

BigDog::BigDog(const BigDog& other){
	*this = other;
	std::cout << "Copy BigDog constructor was called!" << std::endl;
}

BigDog::~BigDog(){
	std::cout << "Aouuuu" << std::endl;
}

BigDog & BigDog::operator=( const BigDog& other ){
	std::cout << "Assignation BigDog constructor was called!" << std::endl;
	this->_type = other._type;
	this->_hp = other._hp;
	return (*this);
}
