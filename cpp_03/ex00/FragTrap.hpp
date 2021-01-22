#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap {
private:
	int			_hit_points;
	int			_max_hit_points;
	int			_energy_points;
	int			_max_energy_points;
	int			_level;
	std::string	_name;
	int			_melee_ad;
	int			_ranged_ad;
	int			_armor_dr;
public:
	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const Fixed& other);
	~FragTrap();
	FragTrap &	operator=( Fixed const & rhs );

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif