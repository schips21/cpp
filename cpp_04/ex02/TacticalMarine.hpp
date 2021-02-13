#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine{
public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine& other);
	virtual ~TacticalMarine();
	TacticalMarine & operator=( const TacticalMarine& other );

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif