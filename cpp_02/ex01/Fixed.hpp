#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed {
private:
	int					_fixed_val;
	static const int	_bits = 8;
public:
	Fixed();
	Fixed(const Fixed& other);			//copy constructor
	~Fixed();
	Fixed &	operator=( Fixed const & rhs );

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	Fixed( const int fixed_val );
	Fixed( const float fixed_val );
	int		toInt( void ) const;
	float	toFloat( void ) const;
};

std::ostream &operator<<(std::ostream &oper, Fixed const &fixed_val);

#endif