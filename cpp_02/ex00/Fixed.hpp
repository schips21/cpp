#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int					_fixed_val;
	static const int	_bits = 8;
public:
	Fixed();
	Fixed(int fixed_val);
	Fixed(const Fixed& other);			//copy constructor
	~Fixed();
	Fixed &	operator=( Fixed const & rhs );

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif