#include "Enemy.hpp"

Enemy::Enemy(){
	_type = "";
	_hp = 0;
//	std::cout << "There is default Enemy constructor" << std::endl;
}

Enemy::Enemy(int hp, std::string const & type){
	_type = type;
	_hp = hp;
//	std::cout << "Enemy of type " << _type << " just appeared!" << std::endl;
}

Enemy::Enemy(const Enemy& other){
	*this = other;
	std::cout << "Copy Enemy constructor was called!" << std::endl;
}

Enemy::~Enemy(){
//	std::cout << "Enemy of type " << _type << " just died!" << std::endl;
}

Enemy & Enemy::operator=( const Enemy& other ){
	std::cout << "Assignation Enemy constructor was called!" << std::endl;
	this->_type = other._type;
	this->_hp = other._hp;
	return (*this);
}

std::string Enemy::getType() const{
	return _type;
}

int Enemy::getHP() const{
	return _hp;
}

void Enemy::takeDamage(int damage){
	if (damage >= 0){
		_hp -= damage;
	}
}