#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
protected:
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
	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const  ClapTrap& other);
	~ ClapTrap();
	ClapTrap &	operator=( ClapTrap const & rhs );

//	void	rangedAttack(std::string const & target);
//	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif