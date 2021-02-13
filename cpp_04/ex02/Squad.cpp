#include "Squad.hpp"

Squad::Squad() : _units_count(0), _marine(NULL){
//	std::cout<< "Default Squad constructor was called!" << std::endl;
}

Squad::Squad(int units_count, ISpaceMarine** marine) : _units_count(units_count), _marine(marine){
//	std::cout<< "Squad constructor with parameters was called!" << std::endl;
}

Squad::Squad(const Squad& other){
	std::cout << "Copy Squad constructor was called!" << std::endl;
	*this = other;
}

Squad::~Squad(){
//	std::cout << "Squad destructor was called!" << std::endl;
	if (this->_units_count > 0 && this->_marine != NULL) {
		for(int i = 0; i < this->_units_count; i++){
			if (this->_marine[i] != NULL){
				delete this->_marine[i];
				this->_marine[i] = NULL;
			}
		}
		delete [] this->_marine;
		this->_marine = NULL;
		this->_units_count = 0;
	}
}

Squad & Squad::operator=( const Squad& other ){
	std::cout << "Squad assignation operator was called!" << std::endl;
	if (this->_units_count > 0)
	{
		for(int i = 0; i < this->_units_count; i++){
			delete this->_marine[i];
		}
		delete [] this->_marine;
		this->_marine = NULL;
	}
	this->_units_count = other._units_count;
	this->_marine = new ISpaceMarine*[this->_units_count];
	for(int i = 0; i < this->_units_count; i++){
		this->_marine[i] = other._marine[i]->clone();
	}
	return (*this);
}

int Squad::getCount() const{
	return _units_count;
}

ISpaceMarine* Squad::getUnit(int n) const{
	if (_marine != nullptr){
		return _marine[n];
	}
	else{
		return nullptr;
	}
}

int Squad::push(ISpaceMarine* marine){
	if (marine == NULL){
		return this->_units_count;
	}
	ISpaceMarine** tmp = new ISpaceMarine*[this->_units_count + 1];
	int i;
	for(i = 0; i < this->_units_count; i++){
		tmp[i] = this->_marine[i];
	}
	tmp[i] = marine->clone();
	if (this->_units_count > 0){
		delete [] this->_marine;
	}
	this->_marine = tmp;
	this->_units_count++;

	return this->_units_count;
}