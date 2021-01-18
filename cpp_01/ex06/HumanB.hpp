#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
	std::string	name;
	Weapon*		weaponB;
public:
	HumanB(std::string newName);
	~HumanB();
	void				attack();
	void				setWeapon(Weapon& newWeapon);
};

#endif