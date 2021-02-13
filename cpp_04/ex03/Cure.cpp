#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
//	std::cout << "Default Cure constructor was called" << std::endl;
}

Cure::Cure(const Cure& other){
	*this = other;
//	std::cout << "Copy Cure constructor was called" << std::endl;
}

Cure::~Cure(){
//	std::cout << "Cure destructor was called" << std::endl;
}

Cure & Cure::operator=( const Cure& other ){
	this->setXp(other.getXP());
	this->setType(other.getType());
	return *this;
}

AMateria* Cure::clone() const{
	AMateria *newCure = new Cure(*this);
	return (newCure);
}

void Cure::use(ICharacter& target){
	this->setXp(this->getXP() + 10);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}