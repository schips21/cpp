#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class	 Character{
protected:
	std::string _name;
	int _ap;
	AWeapon *_weapon;
public:
	Character();
	Character(std::string const & name);
	Character(const Character& other);
	virtual ~Character();
	Character & operator=( const Character& other );

	void recoverAP();
	void equip(AWeapon* weapon);
	void attack(Enemy* enemy);
	std::string getName() const;
	int getApNumber() const;
	AWeapon * getWeapon() const;
	std::string getWeaponName() const;
};

std::ostream &operator<<(std::ostream &oper, const Character & character_to_introduce);

#endif