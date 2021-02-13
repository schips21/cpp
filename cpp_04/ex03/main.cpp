#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;

	
//	IMateriaSource* src = new MateriaSource();
//	AMateria *lol = new Ice;
//	src->learnMateria(lol);
//	delete lol;
//
//	ICharacter* me = new Character("me");
//	AMateria* tmp;
//	tmp = src->createMateria("ice");
//	me->equip(tmp);
//	delete tmp;
//	tmp = src->createMateria("cure");
//	me->equip(tmp);
//	delete tmp;
//
//	lol = new Cure;
//	src->learnMateria(lol);
//	delete lol;
//
//	tmp = src->createMateria("cure");
//	me->equip(tmp);
//	delete tmp;
//
//	ICharacter* bob = new Character("bob");
//	me->use(0, *bob);
//	me->use(1, *bob);
//
//	lol = new Cure;
//	src->learnMateria(lol);
//	delete lol;
//	tmp = src->createMateria("milk");
//	me->equip(tmp);
//	delete tmp;
//	me->use(2, *bob);
//
//	lol = new Cure;
//	src->learnMateria(lol);
//	delete lol;
//	tmp = src->createMateria("ice");
//	me->equip(tmp);
//	delete tmp;
//
//	tmp = src->createMateria("ice");
//	me->equip(tmp);
//	delete tmp;
//
//	me->unequip(4);
//	me->use(3, *bob);
//
//	tmp = src->createMateria("ice");
//	me->equip(tmp);
//	delete tmp;
//
//
//	delete bob;
//	delete me;
//	delete src;
//
//	return 0;
}