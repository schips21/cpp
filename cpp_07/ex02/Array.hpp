#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array{
private:
	T *_arr_data;
	unsigned int _n;
public:
	Array(){
		_arr_data = NULL;
	};

	Array(unsigned int n){
		_arr_data = new T[n];
		_n = n;
	};

	Array(const Array& other){
		this->_arr_data = NULL;
		*this = other;
	}

	~Array(){
		if (_arr_data != NULL){
			delete [] _arr_data;
		}
	}

	Array & operator=( const Array & other ){
		if (this == &other){
			return *this;
		}
		this->_n = other._n;
		if (this->_arr_data != NULL){
			delete [] this->_arr_data;
		}
		this->_arr_data = new T[this->_n];
		for (int i = 0; i < _n; i++){
			this->_arr_data[i] = other._arr_data[i];
		}
		return *this;
	}

	T & operator[](int i)
	{
		if (i < 0 || i >= _n){
			throw std::exception();
		}
		return _arr_data[i];
	}

	const T & operator[](int i) const
	{
		if (i < 0 || i >= _n){
			throw std::exception();
		}
		return _arr_data[i];
	}

	unsigned int size() const{
		return _n;
	}
};


#endif