#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim {
private:
	Peon();
public:
	Peon(std::string name);
	Peon(const Peon& other);
	virtual ~Peon();
	Peon & operator=( const Peon& other );

	void getPolymorphed() const;
};

#endif