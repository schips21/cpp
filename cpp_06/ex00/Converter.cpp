#include "Converter.hpp"

Converter::Converter() : _val(0.0), _precis(0){
}

Converter::Converter(std::string str){
	_precis = str.length();
	if (_precis == 1 && !isdigit(str[0])){
		_val = static_cast<double>(str[0]);
	}
	else{
		try{
			_val = std::stod(str);
			check_str(str);
		}
		catch (const std::exception& err){
			throw std::exception();
		}
	}
}

Converter::Converter(const Converter & other){
	*this = other;
}

Converter::~Converter(){
}

Converter & Converter::operator=(const Converter & rhs){
	_val = rhs._val;
	_precis = rhs._precis;
	return *this;
}

void Converter::check_str(std::string str){
	int i = 0;
	if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf"
	|| str == "+inf" || str == "nan"){
		return;
	}
	if (str[i] == '-' && _precis > 1 && isdigit(str[i + 1])){
		i++;
	}
	while (isdigit(str[i]) && i < _precis){
		i++;
	}
	if ((i + 1) < _precis && i!= 0&& str[i] == '.' && isdigit(str[i + 1])){
		i++;
		while (isdigit(str[i]) && i < _precis){
			i++;
		}
		if (i < _precis && str[i] == 'f'){
			i++;
		}
	}
	if (i != _precis){
		throw std::exception();
	}
}

void Converter::cast(){
	cast_to_char();
	cast_to_int();
	cast_to_float();
	cast_to_double();
}

void Converter::cast_to_char(){
	char val;
	std::cout << "char: ";

	if (_val >= 0 && _val < 32){
		std::cout << "Non displayable" << std::endl;
	}
	else if (_val >= 32 && _val <= 127){
		val = static_cast<char>(_val);
		std::cout << "\'" << val << "\'" << std::endl;
	}
	else{
		std::cout << "impossible" << std::endl;
	}
}

void Converter::cast_to_int(){
	int val;
	std::cout << "int: ";
	if (_val >= -2147483648 && _val <= 2147483647){
		val = static_cast<int>(_val);
		std::cout << val << std::endl;
	}
	else{
		std::cout << "impossible" << std::endl;
	}
}

void Converter::cast_to_float(){
	float val;
	std::cout << "float: ";
	val = static_cast<float>(_val);
	if (val - static_cast<int>(_val) == 0){
		std::cout << val << ".0f" << std::endl;
	}
	else{
		std::cout << val << "f" << std::endl;
	}
}

void Converter::cast_to_double(){
	if (_val - static_cast<int>(_val) == 0){
		std::cout << "double " << _val << ".0" << std::endl;
	}
	else{
		std::cout << "double " << _val << std::endl;
	}
}
