#include "Zombie.hpp"

//Zombie::Zombie(const std::string &newName, const std::string &newType): name(newName), type(newType) {
Zombie::Zombie(): name("def_name"), type("Perfect zombie") {
	std::cout << "Zombie " << name << " is here!" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << name << " has gone away!" << std::endl;
}

void	Zombie::announce(){
	std::cout << name << " (" << type << ") Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::setZombieName(const std::string &newName){
	name = newName;
}
