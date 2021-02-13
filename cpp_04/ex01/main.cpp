#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"
#include "BigDog.hpp"
#include "Knife.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	return 0;

//	Character* me = new Character("me");
//	std::cout << *me;
//	Enemy* b = new RadScorpion();
//	Enemy* mutant = new SuperMutant();
//	Enemy* dog = new BigDog();
//	AWeapon* pr = new PlasmaRifle();
//	AWeapon* pf = new PowerFist();
//	AWeapon* k = new Knife();
//	me->equip(pr);
//	std::cout << *me;
//	me->equip(pf);
//	me->attack(b);
//	std::cout << *me;
//	me->equip(pr);
//	std::cout << *me;
//	me->attack(b);
//	std::cout << *me;
//	me->attack(b);
//	std::cout << *me;
//
//	me->attack(dog);
//	std::cout << *me;
//	me->attack(dog);
//	std::cout << *me;
//	me->equip(k);
//	std::cout << *me;
//	me->attack(dog);
//	std::cout << *me;
//	me->recoverAP();
//	std::cout << *me;
//	me->attack(mutant);
//	std::cout << *me;
//
//	delete me;
//	if (b->getHP() >= 0){
//		delete b;
//	}
//	if (dog->getHP() >= 0){
//		delete dog;
//	}
//	if (mutant->getHP() >= 0){
//		delete mutant;
//	}
//	delete pr;
//	delete pf;
//	delete k;
//
//	return 0;
}