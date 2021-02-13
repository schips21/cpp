#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine{
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator& other);
	virtual ~AssaultTerminator();
	AssaultTerminator & operator=( const AssaultTerminator& other );

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif