#include "Character.hpp"

Character::Character(){
	_name = "";
	_ap = 40;
	_weapon = NULL;
//	std::cout << "There is default Enemy constructor" << std::endl;
}

Character::Character(std::string const & name){
	_name = name;
	_ap = 40;
	_weapon = NULL;
//	std::cout << "Character " << _name << " just appeared!" << std::endl;
}

Character::Character(const Character& other){
	*this = other;
	std::cout << "Copy Character constructor was called!" << std::endl;
}

Character::~Character(){
	std::cout << "Character " << _name << " just died!" << std::endl;
}

Character & Character::operator=( const Character& other ){
	std::cout << "Assignation Character constructor was called!" << std::endl;
	this->_name = other._name;
	this->_ap = other._ap;
	this->_weapon = other._weapon;
	return (*this);
}

void Character::recoverAP(){
	_ap += 10;
	if (_ap > 40){
		_ap = 40;
	}
}

void Character::equip(AWeapon* weapon){
	_weapon = weapon;
}

void Character::attack(Enemy* enemy){
	if (_weapon != NULL && _ap >= _weapon->getAPCost()){
		std::cout << _name << " attacks " << enemy->getType()
		<< " with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		enemy->takeDamage(_weapon->getDamage());
		if (enemy->getHP() <= 0) {
			delete enemy;
		}
		_ap -= _weapon->getAPCost();
		if (_ap < 0){
			_ap = 0;
		}
	}
}

std::string Character::getName() const{
	return _name;
}

int Character::getApNumber() const{
	return _ap;
}

AWeapon * Character::getWeapon() const{
	if (_weapon != NULL){
		return _weapon;
	}
	else {
		return NULL;
	}
}

std::string Character::getWeaponName() const{
	return _weapon->getName();
}

std::ostream &operator<<(std::ostream &oper, const Character & character_to_introduce){
	if (character_to_introduce.getWeapon() != NULL){
		oper << character_to_introduce.getName() << " has "
		<< character_to_introduce.getApNumber() << " AP and wields a "
		<< character_to_introduce.getWeaponName() << std::endl;
	}
	else{
		oper << character_to_introduce.getName() << " has "
		<< character_to_introduce.getApNumber() << " AP and is unarmed" << std::endl;
	}
	return (oper);
}