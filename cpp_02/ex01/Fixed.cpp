#include "Fixed.hpp"

Fixed::Fixed() : _fixed_val(0){
	std::cout << "Default constructor called" << std::endl;
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
//	std::cout << "getRawBits member function called" << std::endl;
	return _fixed_val;
}

void Fixed::setRawBits( int const raw ){
	_fixed_val = raw;
}

Fixed::Fixed( const int fixed_val ){
	std::cout << "Int constructor called" << std::endl;
	setRawBits(fixed_val << _bits);
//	setRawBits(fixed_val * (1 << _bits));
}

Fixed::Fixed( const float fixed_val ){
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(fixed_val * (1 << _bits)));
}

int	Fixed::toInt( void ) const{
	return (_fixed_val / (1 << _bits));
}

float	Fixed::toFloat( void ) const{
	return (float(_fixed_val) / (float)(1 << _bits));
}

std::ostream &operator<<(std::ostream &oper, Fixed const &fixed_val){
	oper << fixed_val.toFloat();
	return (oper);
}
