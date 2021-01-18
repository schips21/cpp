#include "HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon &newWeaponA) : weaponA(newWeaponA){
	name = newName;
	std::cout << "HumanA " << name << " is here!" << std::endl;
}

HumanA::~HumanA(){
	std::cout << "HumanA " << name << " has gone away!" << std::endl;
}

void	HumanA::attack(){
	std::cout << name << " attacks with his " << this->weaponA.getType() << std::endl;
}