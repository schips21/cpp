#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
public:
	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& other);
	~FragTrap();
	FragTrap &	operator=( FragTrap const & rhs );

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	vaulthunter_dot_exe(std::string const & target);
};

#endif