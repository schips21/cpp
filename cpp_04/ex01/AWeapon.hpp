#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class	AWeapon{
protected:
	std::string _name;
	int _apcost;
	int _damage;
public:
	AWeapon();
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon& other);
	virtual ~AWeapon();
	AWeapon & operator=( const AWeapon& other );

	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif