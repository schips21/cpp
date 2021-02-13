#ifndef BIGDOG_HPP
# define BIGDOG_HPP

#include "Enemy.hpp"

class	BigDog : public Enemy{
public:
	BigDog();
	BigDog(const BigDog& other);
	virtual ~BigDog();
	BigDog & operator=( const BigDog& other );
};

#endif