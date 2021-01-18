#include "Weapon.hpp"

Weapon::Weapon(std::string newType){
	type = newType;
	std::cout << "Weapon " << type << " is here!" << std::endl;
}

Weapon::~Weapon(){
	std::cout << "Weapon " << type << " has gone away!" << std::endl;
}

void	Weapon::setType(const std::string &newType){
	type = newType;
	std::cout << "Weapon type set to " << type << std::endl;
}

const std::string& Weapon::getType() const{
//	const std::string &ref = type;
	return (type);
}