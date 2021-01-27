#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 50;
	_max_energy_points = 50;
	_level = 1;
	_name = "default_name";
	_melee_ad = 20;
	_ranged_ad = 15;
	_armor_dr = 3;
	std::cout << "Default Scavtrap is here! Be ready for the challenge" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name){
	_name = name;
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 50;
	_max_energy_points = 50;
	_level = 1;
	_melee_ad = 20;
	_ranged_ad = 15;
	_armor_dr = 3;
	std::cout << "Scavtrap " << _name <<" is here! Be ready for the challenge" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other._name){
	std::cout << "Copy constructor of Scavtrap called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap(){
	std::cout << "Scavtrap " << _name << " has gone away! This time you won!" << std::endl;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs ){
	std::cout << "Assignation operator of Scavtrap called" << std::endl;
	_hit_points = rhs._hit_points;
	_max_hit_points = rhs._max_hit_points;
	_energy_points = rhs._energy_points;
	_max_energy_points = rhs._max_energy_points;
	_level = rhs._level;
	_name = rhs._name;
	_melee_ad = rhs._melee_ad;
	_ranged_ad = rhs._ranged_ad;
	_armor_dr = rhs._armor_dr;
	return *this;
}

void	ScavTrap::rangedAttack(std::string const & target){
	std::cout << "Scavtrap " << _name << " attacks "
			  << target << " at range, causing " << _ranged_ad
			  << " points of damage! Oh no, please be careful next time!!!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target){
	std::cout << "Scavtrap " << _name << " attacks "
			  << target << " at melee, causing " << _melee_ad
			  << " points of damage! Hahaha he's winner today!!!" << std::endl;
}

//void	ScavTrap::takeDamage(unsigned int amount){
//	_hit_points -= (amount - _armor_dr);
//	if (_hit_points <= 0){
//		_hit_points = 0;
//		std::cout << "Claptrap " << _name << " now is dead!!! Now it's not funny:(" << std::endl;
//	}
//	else{
//		std::cout << "Claptrap " << _name << " is damaged on "
//		<< amount - _armor_dr << " points, he lost them in fair fight!!!" << _hit_points  << std::endl;
//	}
//}
//
//void	ScavTrap::beRepaired(unsigned int amount){
//	_hit_points += amount;
//	if (_hit_points >= 100){
//		_hit_points = 100;
//		_hit_points = 100;
//	}
//	std::cout << "Claptrap " << _name << " has repaired to HP "
//			  << _hit_points << "! He's back! Beware, enemies!!!" << std::endl;
//}

void	ScavTrap::challengeNewcomer(std::string const & target){
	srand(time(0));
	std::string challenge_arr[5] = {"dance", "recite a verse", "sing a song",
	"draw a picture", "take picture with Claptrap"};
	_energy_points -= 15;
	if (_energy_points <= 0){
		_energy_points = 0;
		std::cout << "Scavtrap " << _name << " don't have enough energy to challenge newcomer! Oh no!" << std::endl;
	}
	else{
		std::cout << "Scavtrap " << _name << " has a challenge to " << target
		<< " if he wants to join soon-to-be evil lair: you need to " << challenge_arr[rand() % 5]
		<< ". Good luck!" << std::endl;
	}
}
