#include "Character.hpp"

Character::Character() : _name(""), _materia(nullptr), _materia_len(0){
//	std::cout<< "Default Character constructor was called!" << std::endl;
}

Character::Character(std::string name) : _name(name), _materia(nullptr), _materia_len(0){
//	std::cout<< "Character constructor with parameters was called!" << std::endl;
}

Character::Character(const Character& other){
//	std::cout << "Copy Character constructor was called!" << std::endl;
	*this = other;
}

Character::~Character(){
//	std::cout << "Character destructor was called!" << std::endl;
	int i = 0;
	if (this->_materia != nullptr) {
		while (this->_materia[i] != nullptr && i < _materia_len){
			delete this->_materia[i];
			this->_materia[i] = nullptr;
			i++;
		}
		delete [] this->_materia;
		this->_materia = nullptr;
	}
}

Character & Character::operator=( const Character& other ){
//	std::cout << "Character assignation operator was called!" << std::endl;
	int i = 0;
	this->_name = other._name;
	if (this->_materia != nullptr)
	{
		while (this->_materia[i] != nullptr){
			delete this->_materia[i++];
		}
		delete [] this->_materia;
		this->_materia = nullptr;
	}
	i = 0;
	while (other._materia[i] != nullptr){
		i++;
	}
	this->_materia = new AMateria*[i];
	for(_materia_len = 0; _materia_len < i; _materia_len++){
		this->_materia[_materia_len] = other._materia[_materia_len]->clone();
	}
	return (*this);
}

std::string const & Character::getName() const{
	return _name;
}

void Character::equip(AMateria* m){
	int i;
	if (m != nullptr && _materia_len < 4){
		AMateria** tmp = new AMateria*[_materia_len + 1];
		for (i = 0; i < _materia_len; i++){
			tmp[i] = this->_materia[i];
		}
		tmp[i] = m->clone();
		delete [] this->_materia;
		this->_materia = tmp;
		_materia_len++;
	}
	else if (_materia_len >= 4){
		std::cout << "You can't equip more than 4 materials!" << std::endl;
	}
}

void Character::unequip(int idx){
	if (_materia_len != 0 && idx < _materia_len){
		_materia[idx] = nullptr;
		while (idx + 1 < _materia_len){
			_materia[idx] = _materia[idx + 1];
			idx++;
		}
		_materia[idx] = nullptr;
		_materia_len--;
	}
	else{
		std::cout << "Invalid index for unequip!" << std::endl;
	}
}

void Character::use(int idx, ICharacter& target){
	if (idx < _materia_len){
		_materia[idx]->use(target);
	}
	else
	{
		std::cout << "Invalid index for use!" << std::endl;
	}
}
