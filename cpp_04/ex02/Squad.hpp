#ifndef SQUAD_HPP
# define SQUAD_HPP

#include <iostream>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad{
private:
	int _units_count;
	ISpaceMarine** _marine;
public:
	Squad();
	Squad(int units_count, ISpaceMarine** marine);
	Squad(const Squad& other);
	virtual ~Squad();
	Squad & operator=( const Squad& other );

	int getCount() const;
	ISpaceMarine* getUnit(int n) const;
	int push(ISpaceMarine* marine);
};

#endif