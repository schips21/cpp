#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Seller.hpp"

int main(){
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;


//	Sorcerer robert("Robert", "the Magnificent");
//
//	Victim jim("Jimmy");
//	Peon joe("Joe");
//	Seller john("John");
//
//	std::cout << robert << jim << joe << john;
//
//	robert.polymorph(jim);
//	robert.polymorph(joe);
//	robert.polymorph(john);
//
//	std::cout << std::endl;
//
//	jim.getPolymorphed();
//	joe.getPolymorphed();
//	john.getPolymorphed();
//
//	return 0;
}