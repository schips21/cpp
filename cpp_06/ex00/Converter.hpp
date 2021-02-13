#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <sstream>

class Converter{
private:
	double _val;
	int		_precis;
	Converter();
	void cast_to_char();
	void cast_to_int();
	void cast_to_float();
	void cast_to_double();
public:
	Converter(std::string str);
	Converter(const Converter & other);
	~Converter();
	Converter & operator=(const Converter & rhs);

	void check_str(std::string str);
	void cast();
};

#endif