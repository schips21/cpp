#include "Zombie.hpp"

Zombie::Zombie(const std::string &newName, const std::string &newType): name(newName), type(newType) {
	std::cout << "Zombie " << name << " is here!" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << name << " has gone away!" << std::endl;
}

void	Zombie::announce(){
	std::cout << name << " (" << type << ") Braiiiiiiinnnssss..." << std::endl;
}
