#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
	std::string	name;
	Weapon&		weaponA;
public:
	HumanA(std::string newName, Weapon& newWeaponA);
	~HumanA();
	void				attack();
};

#endif
