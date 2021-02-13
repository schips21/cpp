#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
//	std::cout << "Default Ice constructor was called" << std::endl;
}

Ice::Ice(const Ice& other){
	*this = other;
//	std::cout << "Copy Ice constructor was called" << std::endl;
}

Ice::~Ice(){
//	std::cout << "Ice destructor was called" << std::endl;
}

Ice & Ice::operator=( const Ice& other ){
	this->setXp(other.getXP());
	this->setType(other.getType());
	return *this;
}

AMateria* Ice::clone() const{
	AMateria *newIce = new Ice(*this);
	return (newIce);
}

void Ice::use(ICharacter& target){
	this->setXp(this->getXP() + 10);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}