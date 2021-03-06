#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <array>
#include <list>
#include <algorithm>

class NotFoundException : public std::exception {
public:
	virtual const char *what() const throw(){
		return "Parameter isn't found in container";
	};
};

template<typename T>
typename T::const_iterator easyfind( const T & container, const int & to_find){
	typename T::const_iterator it;
	it = std::find(container.begin(), container.end(), to_find);
	if (it == container.end()){
		throw NotFoundException();
	}
	return it;
}



#endif