#include "FragTrap.hpp"

FragTrap::FragTrap(){
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_name = "";
	_melee_ad = 30;
	_ranged_ad = 20;
	_armor_dr = 5;
}

FragTrap::FragTrap(const std::string& name) : _name(name){

}

FragTrap::FragTrap(constFragTrap& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

FragTrap::~FragTrap(){

}

FragTrap::FragTrap &	operator=( FragTrap const & rhs ){
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed_val = rhs.getRawBits();
	return *this;
}

void	FragTrap::rangedAttack(std::string const & target){
//	_energy_points -= _ranged_ad;
//	if (_energy_points <= 0){
//		std::cout << "FR4G-TP don't have enough energy to attacks at range" << std::endl;
//		_energy_points = 0;
//	}
//	else{
		std::cout << "FR4G-TP " << _name << " attacks "
		<< target << " at range, causing " << _ranged_ad
		<< " points of damage!" << std::endl;
//	}
}

void	FragTrap::meleeAttack(std::string const & target){
//	_energy_points -= _melee_ad;
//	if (_energy_points <= 0){
//		std::cout << "FR4G-TP" << _name << " don't have enough energy to attacks at melee" << std::endl;
//		_energy_points = 0;
//	}
//	else{
		std::cout << "FR4G-TP " << _name << " attacks "
		<< target << " at melee, causing " << _melee_ad
		<< " points of damage!" << std::endl;
//	}
}

void	FragTrap::takeDamage(unsigned int amount){
	_hit_points -= (amount - _armor_dr);
	if (_hit_points <= 0){
		_hit_points = 0;
		std::cout << "FR4G-TP" << _name << " has died!" << std::endl;
	}
	else{
		std::cout << "FR4G-TP " << _name << " lost "
		<< amount << " points by attack" << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount){
	_hit_points += amount;
	if (_hit_points >= 100){
		_hit_points = 100;
	}
}