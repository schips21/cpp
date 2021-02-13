#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class	RadScorpion : public Enemy{
public:
	RadScorpion();
	RadScorpion(const RadScorpion& other);
	virtual ~RadScorpion();
	RadScorpion & operator=( const RadScorpion& other );
};

#endif