#ifndef KNIFE_HPP
# define KNIFE_HPP

#include "AWeapon.hpp"

class	Knife : public AWeapon{
public:
	Knife();
	Knife(const Knife& other);
	virtual ~Knife();
	Knife & operator=( const Knife& other );

	void attack() const;
};

#endif