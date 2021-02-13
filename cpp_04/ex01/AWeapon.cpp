#include "AWeapon.hpp"

AWeapon::AWeapon(){
	_name = "";
	_apcost = 0;
	_damage = 0;
//	std::cout << "Default AWeapon just appeared!" << std::endl;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage){
	_name = name;
	_apcost = apcost;
	_damage = damage;
//	std::cout << "AWeapon " << _name << " just appeared!" << std::endl;
}

AWeapon::AWeapon(const AWeapon& other){
	*this = other;
	std::cout << "Copy AWeapon constructor was called!" << std::endl;
}

AWeapon::~AWeapon(){
	std::cout << "AWeapon " << _name << " just died!" << std::endl;
}

AWeapon & AWeapon::operator=( const AWeapon& other ){
	std::cout << "Assignation AWeapon constructor was called!" << std::endl;
	this->_name = other._name;
	this->_apcost = other._apcost;
	this->_damage = other._damage;
	return (*this);
}

std::string AWeapon::getName() const{
	return _name;
}

int AWeapon::getAPCost() const{
	return _apcost;
}

int AWeapon::getDamage() const{
	return _damage;
}
