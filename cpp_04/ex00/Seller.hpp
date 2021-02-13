#ifndef SELLER_HPP
# define SELLER_HPP

#include "Victim.hpp"

class Seller : public Victim {
private:
	Seller();
public:
	Seller(std::string name);
	Seller(const Seller& other);
	virtual ~Seller();
	Seller & operator=( const Seller& other );

	void getPolymorphed() const;
};

#endif