#include "Victim.hpp"

Victim::Victim(){
	std::cout << "There is default Victim constructor which won't be called!" << std::endl;
}

Victim::Victim(std::string name) : _name(name){
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim& other){
	*this = other;
	std::cout << "Copy Victim constructor was called!" << std::endl;
}

Victim::~Victim(){
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

Victim & Victim::operator=( const Victim& other ){
	std::cout << "Assignation Victim constructor was called!" << std::endl;
	this->_name = other._name;
	return (*this);
}

std::string Victim::get_name() const{
	return this->_name;
}

void	Victim::getPolymorphed() const{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &oper, const Victim & victim_to_introduce){
	oper << "I'm " << victim_to_introduce.get_name() << " and I like otters!" << std::endl;
	return (oper);
}