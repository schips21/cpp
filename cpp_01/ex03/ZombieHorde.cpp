#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int newN){
	n = newN;
	zombie_arr = new Zombie[n];
	const std::string names[6] = {"Max", "Vova", "Petya", "Vasya", "Oleg", "Pasha"};
	srand(time(0));
	for (int i = 0; i < n; i++ ) {
		zombie_arr[i].setZombieName(names[rand() % 6]);
	}
	std::cout << "ZombieHorde was created" << std::endl;
}

ZombieHorde::~ZombieHorde() {
	delete [] zombie_arr;
	std::cout << "ZombieHorde was deleted" << std::endl;
}

void	ZombieHorde::announce(){
	for (int i = 0; i < n; i++ ) {
		zombie_arr[i].Zombie::announce();
	}
}

