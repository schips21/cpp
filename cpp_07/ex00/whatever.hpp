#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

class Awesome {
public:
	Awesome( int n ) : _n( n ) {}
	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
	int getN(){
		return _n;
	};
private:
	int _n;
};

std::ostream	&operator<<(std::ostream &oper, Awesome &aw)
{
	oper << aw.getN();
	return (oper);
}

template<class T> void swap( T &a, T &b){
	T tmp = a;
	a = b;
	b = tmp;
}

template<class T> const T & min( const T & a, const T & b){
	if (a < b){
		return a;
	}
	else{
		return b;
	}
}

template<class T> const T & max( const T & a, const T & b){
	if (a > b){
		return a;
	}
	else{
		return b;
	}
}

#endif