#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	_hit_points = 0;
	_max_hit_points = 0;
	_energy_points = 0;
	_max_energy_points = 0;
	_level = 0;
	_name = "default_name";
	_melee_ad = 0;
	_ranged_ad = 0;
	_armor_dr = 0;
	std::cout << "Default Claptrap was born now!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name){
	_hit_points = 0;
	_max_hit_points = 0;
	_energy_points = 0;
	_max_energy_points = 0;
	_level = 0;
	_melee_ad = 0;
	_ranged_ad = 0;
	_armor_dr = 0;
	std::cout << "Claptrap " << _name << " was born now!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap(){
	std::cout << "Claptrap " << _name << " has disappear now!" << std::endl;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs ){
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

void	ClapTrap::takeDamage(unsigned int amount){
	_hit_points -= (amount - _armor_dr);
	if (_hit_points <= 0){
		_hit_points = 0;
		std::cout << "Claptrap " << _name << " has died! Oh no!!!!" << std::endl;
	}
	else{
		std::cout << "Claptrap " << _name << " lost "
				  << amount - _armor_dr << " points by attack:((( His HP now is " << _hit_points  << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount){
	_hit_points += amount;
	if (_hit_points >= 100){
		_hit_points = 100;
	}
	std::cout << "Claptrap " << _name << " has repaired to HP "
			  << _hit_points << "! Happy he becomes more healthier!" << std::endl;
}

std::string ClapTrap::get_name(void) const{
	return (_name);
}