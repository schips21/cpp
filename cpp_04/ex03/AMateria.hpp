#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class ICharacter;

class	AMateria{
private:
	std::string _type;
	unsigned int _xp;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria& other);
	virtual ~AMateria();
	AMateria & operator=( const AMateria& other );

	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

	std::string getType();
	unsigned int getXp();
	void setType(std::string type);
	void setXp(unsigned int xp);
};

#include "ICharacter.hpp"


#endif