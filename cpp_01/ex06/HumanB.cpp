#include "HumanB.hpp"

HumanB::HumanB(std::string newName){
	name = newName;
	std::cout << "HumanB " << name << " is here!" << std::endl;
}

HumanB::~HumanB(){
	std::cout << "HumanB " << name << " has gone away!" << std::endl;
}

void	HumanB::attack(){
	std::cout << name << " attacks with his " << this->weaponB->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& newWeapon) {
	weaponB = &newWeapon;
}