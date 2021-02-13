#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
private:
	AMateria**	_learned_materia;
	int			_learned_materia_len;
public:
	MateriaSource();
	MateriaSource(const MateriaSource& other);
	~MateriaSource();
	MateriaSource & operator=( const MateriaSource& other );

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};

#endif
