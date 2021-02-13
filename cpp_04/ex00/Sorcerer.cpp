#include "Sorcerer.hpp"
#include "Victim.hpp"

Sorcerer::Sorcerer(){
	std::cout << "There is default Sorcerer constructor which won't be called!" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title){
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& other){
	*this = other;
	std::cout << "Copy Sorcerer constructor was called!" << std::endl;
}

Sorcerer::~Sorcerer(){
	std::cout << _name << ", " << _title
	<< ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer & Sorcerer::operator=( const Sorcerer& other ){
	std::cout << "Assignation Sorcerer constructor was called!" << std::endl;
	this->_title = other._title;
	this->_name = other._name;
	return (*this);
}

std::string Sorcerer::get_name() const{
	return this->_name;
}

std::string Sorcerer::get_title() const{
	return this->_title;
}

void Sorcerer::polymorph(Victim const & victim) const{
	victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &oper, const Sorcerer & sorcerer_to_introduce){
	oper << "I am " << sorcerer_to_introduce.get_name() << ", "
	<< sorcerer_to_introduce.get_title() << ", and I like ponies!" << std::endl;
	return (oper);
}