#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap{
public:
	SuperTrap();
	SuperTrap(const std::string& name);
	SuperTrap(const SuperTrap& other);
	~SuperTrap();
	SuperTrap &	operator=( SuperTrap const & rhs );

	void	rangedAttack(std::string const & target);	//нужно наследовать от FragTrap
	void	meleeAttack(std::string const & target);	//нужно наследовать от NinjaTrap
};

#endif