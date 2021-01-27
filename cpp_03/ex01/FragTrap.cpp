#include "FragTrap.hpp"

FragTrap::FragTrap(){
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_name = "default_name";
	_melee_ad = 30;
	_ranged_ad = 20;
	_armor_dr = 5;
    std::cout << "Default FR4G-TP was born!" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : _name(name){
    _hit_points = 100;
    _max_hit_points = 100;
    _energy_points = 100;
    _max_energy_points = 100;
    _level = 1;
    _melee_ad = 30;
    _ranged_ad = 20;
    _armor_dr = 5;
    std::cout << "FR4G-TP " << _name << " was born!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

FragTrap::~FragTrap(){
    std::cout << "FR4G-TP " << _name << " has disappear!" << std::endl;
}

FragTrap &	FragTrap::operator=( FragTrap const & rhs ){
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

void	FragTrap::rangedAttack(std::string const & target){
    std::cout << "FR4G-TP " << _name << " attacks "
    << target << " at range, causing " << _ranged_ad
    << " points of damage! Ha-ha-ha!!!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target){
    std::cout << "FR4G-TP " << _name << " attacks "
    << target << " at melee, causing " << _melee_ad
    << " points of damage! Boooo!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount){
	_hit_points -= (amount - _armor_dr);
	if (_hit_points <= 0){
		_hit_points = 0;
		std::cout << "FR4G-TP" << _name << " has died! Oh no!!!!" << std::endl;
	}
	else{
		std::cout << "FR4G-TP " << _name << " lost "
		<< amount - _armor_dr << " points by attack:((( His HP now is " << _hit_points  << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount){
	_hit_points += amount;
	if (_hit_points >= 100){
		_hit_points = 100;
	}
	std::cout << "FR4G-TP " << _name << " has repaired to HP "
	<< _hit_points << "! Happy he becomes more healthier!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target){
	srand(time(0));
	std::string attacks_arr[5] = {"throw snowballs", "pour water over", "tell a joke",
	"sing a song", "make to dance"};
	_energy_points -= 25;
	if (_energy_points <= 0){
		_energy_points = 0;
		std::cout << "FR4G-TP " << _name << " don't have enough energy to continue" << std::endl;
	}
	else{
		std::cout << "FR4G-TP " << _name << " just made \"" << attacks_arr[rand() % 5]
		<< "\" attack to " << target << ". Ha-ha-ha!" << std::endl;
	}
}