#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim {
protected:
	std::string	_name;
	Victim();
public:
	Victim(std::string name);
	Victim(const Victim& other);
	virtual ~Victim();
	Victim & operator=( const Victim& other );
	std::string	get_name() const;
	virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &oper, const Victim & victim_to_introduce);


#endif