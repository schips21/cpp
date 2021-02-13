#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class	SuperMutant : public Enemy{
public:
	SuperMutant();
	SuperMutant(const SuperMutant& other);
	virtual ~SuperMutant();
	SuperMutant & operator=( const SuperMutant& other );

	void takeDamage(int damage);
};

#endif