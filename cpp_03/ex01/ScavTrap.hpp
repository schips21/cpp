#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap {
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
	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& other);
	~ScavTrap();
	ScavTrap &	operator=( ScavTrap const & rhs );

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(std::string const & target);
};

#endif