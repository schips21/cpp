#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(){
	std::cout<< "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& other){
//	std::cout << "Copy AssaultTerminator constructor was called!" << std::endl;
	*this = other;
}

AssaultTerminator::~AssaultTerminator(){
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator & AssaultTerminator::operator=( const AssaultTerminator& other ){
//	std::cout << "Assignation AssaultTerminator constructor was called!" << std::endl;
	(void)other;
	return (*this);
}

ISpaceMarine* AssaultTerminator::clone() const{
	AssaultTerminator* newMarine = new AssaultTerminator(*this);
	return (newMarine);
}

void AssaultTerminator::battleCry() const{
	std::cout<< "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const{
	std::cout<< "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const{
	std::cout<< "* attacks with chainfists *" << std::endl;
}