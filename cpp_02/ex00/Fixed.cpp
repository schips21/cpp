#include "Fixed.hpp"

Fixed::Fixed() : _fixed_val(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int fixed_val) : _fixed_val(fixed_val){
	std::cout << "Parametric constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=( Fixed const & rhs ){
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed_val = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixed_val;
}

void Fixed::setRawBits( int const raw ){
	_fixed_val = raw;
}