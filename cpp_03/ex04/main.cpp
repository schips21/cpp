#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "SuperTrap.hpp"

int main(){
	std::cout << "Start of constructors" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	SuperTrap super_rob("Super robot");
	ClapTrap clap ("Best clap");
	FragTrap frag("Best frag");
	ScavTrap scav("Best scav");
	NinjaTrap ninj("Best ninj");

	std::cout << "-----------------------------" << std::endl;
	std::cout << "End of constructors" << std::endl;

	srand(time(0));
	const std::string target_arr[5] = {"Wall", "Floor", "Ceiling", "Roof", "House"};

	std::cout << std::endl << "Let's see how FragTrap works!" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	frag.meleeAttack(target_arr[rand() % 5]);
	frag.takeDamage(rand() % 15 + 30);
	frag.beRepaired(rand() % 10 + 10);
	frag.vaulthunter_dot_exe(target_arr[rand() % 5]);
	frag.rangedAttack(target_arr[rand() % 5]);

	std::cout << std::endl << "Now there will be demonstration of ScavTrap class!" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	scav.meleeAttack(target_arr[rand() % 5]);
	scav.takeDamage(rand() % 15 + 30);
	scav.beRepaired(rand() % 10 + 10);
	scav.challengeNewcomer(target_arr[rand() % 5]);
	scav.rangedAttack(target_arr[rand() % 5]);

	std::cout << std::endl << "And now there will be demonstration of NinjaTrap class!" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	ninj.meleeAttack(target_arr[rand() % 5]);
	ninj.takeDamage(rand() % 15 + 30);
	ninj.beRepaired(rand() % 10 + 10);
	ninj.rangedAttack(target_arr[rand() % 5]);
	ninj.ninjaShoebox(ninj);
	ninj.ninjaShoebox(clap);
	ninj.ninjaShoebox(frag);
	ninj.ninjaShoebox(scav);

	std::cout << std::endl << "And now there will be demonstration of SuperTrap class!" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	super_rob.meleeAttack(target_arr[rand() % 5]);
	super_rob.takeDamage(rand() % 15 + 30);
	super_rob.rangedAttack(target_arr[rand() % 5]);
	super_rob.beRepaired(rand() % 10 + 10);
	super_rob.ninjaShoebox(ninj);
	super_rob.ninjaShoebox(clap);
	super_rob.ninjaShoebox(frag);
	super_rob.ninjaShoebox(scav);
	super_rob.vaulthunter_dot_exe(target_arr[rand() % 5]);

	std::cout << std::endl << "Start of destructors" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	return 0;
}