#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
	type = "default";
	std::cout << "ZombieEvent was created" << std::endl;
}

ZombieEvent::~ZombieEvent() {
	std::cout << "ZombieEvent was deleted" << std::endl;
}

void	ZombieEvent::setZombieType(const std::string &newType){
	type = newType;
}

Zombie*		ZombieEvent::newZombie(std::string name){
	Zombie *zombie = new Zombie(name, type);
	return (zombie);
}
