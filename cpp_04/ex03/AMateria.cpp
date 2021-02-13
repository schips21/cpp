#include "AMateria.hpp"

AMateria::AMateria() : _type(""), _xp(0){
//	std::cout << "Default AMateria constructor was called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0){
//	std::cout << "Parametric AMateria constructor was called" << std::endl;
}

AMateria::AMateria(const AMateria& other){
	*this = other;
//	std::cout << "Copy AMateria constructor was called" << std::endl;
}

AMateria::~AMateria(){
//	std::cout << "AMateria destructor was called" << std::endl;
}

AMateria & AMateria::operator=( const AMateria& other ){
	this->_xp = other._xp;
	this->_type = other._type;
	return *this;
}

std::string const & AMateria::getType() const{
	return _type;
}

unsigned int AMateria::getXP() const{
	return _xp;
}

void AMateria::use(ICharacter& target){
	_xp += 10;
	if (target.getName() == "1"){
		_xp += 0;
	}

}

std::string AMateria::getType() {
	return _type;
}

unsigned int AMateria::getXp(){
	return _xp;
}

void AMateria::setType(std::string type) {
	_type = type;
}

void AMateria::setXp(unsigned int xp) {
	_xp = xp;
}
