#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void	tasks_for_frag(void){
	const std::string frag_arr[5] = {"Frag", "Frog", "Frug", "Freg", "Frig"};
	const std::string target_arr[5] = {"Apple", "Dog", "Cat", "Banana", "Horse"};
	srand(time(0));
	FragTrap frag(frag_arr[rand() % 5]);
	frag.meleeAttack(target_arr[rand() % 5]);
	frag.takeDamage(rand() % 15 + 30);
	frag.beRepaired(rand() % 10 + 10);
	frag.vaulthunter_dot_exe(target_arr[rand() % 5]);
	frag.rangedAttack(target_arr[rand() % 5]);
}

void	tasks_for_scav(void){
	const std::string scav_arr[5] = {"Scyv", "Scov", "Scuv", "Scev", "Sciv"};
	const std::string target_arr[5] = {"Monkey", "Mouse", "Bear", "Bird", "Hamster"};
	srand(time(0));
	ScavTrap scav(scav_arr[rand() % 5]);
	scav.meleeAttack(target_arr[rand() % 5]);
	scav.challengeNewcomer(target_arr[rand() % 5]);
	scav.takeDamage(rand() % 15 + 30);
	scav.beRepaired(rand() % 10 + 10);
	scav.rangedAttack(target_arr[rand() % 5]);
}

int main(){
	std::cout << "Let's see how FragTrap works!" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	tasks_for_frag();
	std::cout << std::endl << "And now there will be demonstration of ScavTrap class!" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	tasks_for_scav();
	return 0;
}