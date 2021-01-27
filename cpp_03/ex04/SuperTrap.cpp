#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(), NinjaTrap(), FragTrap(){
	_hit_points = FragTrap::_hit_points;
	_max_hit_points = FragTrap::_max_hit_points;
	_energy_points = NinjaTrap::_energy_points;
	_max_energy_points = NinjaTrap::_max_energy_points;
	_level = 1;
	_name = "default_name";
	_melee_ad = NinjaTrap::_melee_ad;
	_ranged_ad = FragTrap::_ranged_ad;
	_armor_dr = FragTrap::_armor_dr;
	std::cout << "Default SuperTrap is here to do his mission!" << std::endl;
}

SuperTrap::SuperTrap(const std::string& name) : ClapTrap(name), NinjaTrap(name), FragTrap(name){
	_name = name;
	_hit_points = FragTrap::_hit_points;
	_max_hit_points = FragTrap::_max_hit_points;
	_energy_points = NinjaTrap::_energy_points;
	_max_energy_points = NinjaTrap::_max_energy_points;
	_level = 1;
	_melee_ad = NinjaTrap::_melee_ad;
	_ranged_ad = FragTrap::_ranged_ad;
	_armor_dr = FragTrap::_armor_dr;
	std::cout << "SuperTrap " << _name << " is here to do his mission!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& other) : ClapTrap(other._name), NinjaTrap(other._name), FragTrap(other._name){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

SuperTrap::~SuperTrap(){
	std::cout << "SuperTrap " << _name << " has done his mission, goodbye!" << std::endl;
}

SuperTrap &	SuperTrap::operator=( SuperTrap const & rhs ){
	std::cout << "Assignation operator called" << std::endl;
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

void	SuperTrap::rangedAttack(std::string const & target){
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target){
	NinjaTrap::meleeAttack(target);
}