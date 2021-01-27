#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public virtual ClapTrap {
public:
	NinjaTrap();
	NinjaTrap(const std::string& name);
	NinjaTrap(const NinjaTrap& other);
	~NinjaTrap();
	NinjaTrap &	operator=( NinjaTrap const & rhs );

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);

	void	ninjaShoebox(ClapTrap const & target);
	void	ninjaShoebox(FragTrap const & target);
	void	ninjaShoebox(ScavTrap const & target);
	void	ninjaShoebox(NinjaTrap const & target);
};

#endif