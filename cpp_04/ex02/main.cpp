#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
//привет
int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;



//	ISpaceMarine* bob = new TacticalMarine;
//	ISpaceMarine* jim = new AssaultTerminator;
//	ISquad* vlc = new Squad;
//	vlc->push(bob);
//	vlc->push(jim);
//
//	for (int i = 0; i < vlc->getCount(); ++i)
//	{
//		ISpaceMarine* cur = vlc->getUnit(i);
//		cur->battleCry();
//		cur->rangedAttack();
//		cur->meleeAttack();
//	}
//
//	delete vlc;
//	delete bob;
//	delete jim;
//
//	bob = new TacticalMarine;
//	jim = bob->clone();
//	vlc = new Squad;
//	vlc->push(bob);
//	vlc->push(jim);
//
//	for (int i = 0; i < vlc->getCount(); ++i)
//	{
//		ISpaceMarine* cur = vlc->getUnit(i);
//		cur->battleCry();
//		cur->rangedAttack();
//		cur->meleeAttack();
//	}
//
//	delete vlc;
//	delete bob;
//	delete jim;
//
//
//	return 0;
}
