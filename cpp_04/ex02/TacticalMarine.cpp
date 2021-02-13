#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(){
	std::cout<< "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine& other){
//	std::cout << "Copy TacticalMarine constructor was called!" << std::endl;
	*this = other;
}

TacticalMarine::~TacticalMarine(){
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine & TacticalMarine::operator=( const TacticalMarine& other ){
//	std::cout << "Assignation TacticalMarine constructor was called!" << std::endl;
	(void)other;
	return (*this);
}

ISpaceMarine* TacticalMarine::clone() const{
	TacticalMarine* newMarine = new TacticalMarine(*this);
	return (newMarine);
}

void TacticalMarine::battleCry() const{
	std::cout<< "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const{
	std::cout<< "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const{
	std::cout<< "* attacks with a chainsword *" << std::endl;
}