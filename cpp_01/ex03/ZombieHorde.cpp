#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int newN) {
	n = newN;
	//ПРОВЕРИТЬ, КАК ИНИЦИАЛИЗИРОВАТЬ ПРАВИЛЬНО
	zombie = new Zombie*;
	//СДЕЛАТЬ РАНДОМНЫЕ ИМЕНА
	for (int i = 0; i < n; i++ ) {
		zombie[i] = new Zombie("name", "type");
	}
	std::cout << "ZombieHorde was created" << std::endl;

}

ZombieHorde::~ZombieHorde() {
//	for (int i = 0; i < n; i++ ) {
//		delete zombie[i];
//	}
	delete zombie;
	std::cout << "ZombieHorde was deleted" << std::endl;
}

void	ZombieHorde::announce(){
	for (int i = 0; i < n; i++ ) {
		zombie[i]->announce();
	}
}

