#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& other);
	~ScavTrap();
	ScavTrap &	operator=( ScavTrap const & rhs );

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
//	void	takeDamage(unsigned int amount);
//	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(std::string const & target);
};

#endif