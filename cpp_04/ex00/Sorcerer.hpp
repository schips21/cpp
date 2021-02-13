#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer{
private:
	std::string	_name;
	std::string	_title;
	Sorcerer();
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer& other);
	~Sorcerer();
	Sorcerer & operator=( const Sorcerer& other );
	std::string get_name() const;
	std::string get_title() const;
	void polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream &oper, const Sorcerer & sorcerer_to_introduce);


#endif