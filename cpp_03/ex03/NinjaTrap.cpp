#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap(){
	_hit_points = 60;
	_max_hit_points = 60;
	_energy_points = 120;
	_max_energy_points = 120;
	_level = 1;
	_name = "default_name";
	_melee_ad = 60;
	_ranged_ad = 5;
	_armor_dr = 0;
	std::cout << "Default Ninja is here to do his mission!" << std::endl;
}

NinjaTrap::NinjaTrap(const std::string& name) : ClapTrap(name){
	_name = name;
	_hit_points = 60;
	_max_hit_points = 60;
	_energy_points = 120;
	_max_energy_points = 120;
	_level = 1;
	_melee_ad = 60;
	_ranged_ad = 5;
	_armor_dr = 0;
	std::cout << "Ninja " << _name << " is here to do his mission!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& other) : ClapTrap(other._name){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

NinjaTrap::~NinjaTrap(){
	std::cout << "Ninja " << _name << " has done his mission, goodbye!" << std::endl;
}

NinjaTrap &	NinjaTrap::operator=( NinjaTrap const & rhs ){
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

void	NinjaTrap::rangedAttack(std::string const & target){
	std::cout << "Ninja " << _name << " attacks "
	<< target << " at range, causing " << _ranged_ad
	<< " points of damage! Well done!!!" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target){
	std::cout << "Ninja " << _name << " attacks "
	<< target << " at melee, causing " << _melee_ad
	<< " points of damage! Come away from here!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap const & target){
	std::cout << "Hi Clap " << target.get_name() << "! I'm Ninja " << _name
	<< " and my task for you is to wear this sneakers from my shoebox! Have fun! " << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap const & target){
	std::cout << "Hi Frag " << target.get_name() << "! I'm Ninja " << _name
	<< " and my task for you is to wear this red boots from my shoebox! Hope they are beautiful! " << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & target){
	std::cout << "Hi Scav " << target.get_name() << "! I'm Ninja " << _name
	<< " and my task for you is to wear this slippers from my shoebox! They are very comfortably! " << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const & target){
	std::cout << "Hi I'm Ninja " << target._name
	<< " and for myself I left these black sneakers from my shoebox! They are the best for me!" << std::endl;
}