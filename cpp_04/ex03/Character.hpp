#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{
private:
	std::string	_name;
	AMateria**	_materia;
	int			_materia_len;
public:
	Character();
	Character(std::string name);
	Character(const Character& other);
	virtual ~Character();
	Character & operator=( const Character& other );

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif