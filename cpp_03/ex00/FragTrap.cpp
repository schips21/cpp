#include "FragTrap.hpp"

FragTrap::FragTrap(){
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_name = NULL;
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
	std::cout << "FR4G-TP " << _name << " attacks "
	<< target << " at range, causing " << _ranged_ad
	<< " points of damage!" << std::endl;
}