#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _learned_materia(nullptr), _learned_materia_len(0){
//	std::cout<< "Default MateriaSource constructor was called!" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other){
//	std::cout << "Copy MateriaSource constructor was called!" << std::endl;
	*this = other;
}

MateriaSource::~MateriaSource(){
//	std::cout << "MateriaSource destructor was called!" << std::endl;
	int i = 0;
	if (this->_learned_materia != nullptr) {
		while (this->_learned_materia[i] != nullptr && i < _learned_materia_len){
			delete this->_learned_materia[i];
			this->_learned_materia[i] = nullptr;
			i++;
		}
		delete [] this->_learned_materia;
		this->_learned_materia = nullptr;
	}
}

MateriaSource & MateriaSource::operator=( const MateriaSource& other ){
//	std::cout << "MateriaSource assignation operator was called!" << std::endl;
	int i = 0;
	if (this->_learned_materia != nullptr)
	{
		while (this->_learned_materia[i] != nullptr && i < _learned_materia_len){
			delete this->_learned_materia[i++];
		}
		delete [] this->_learned_materia;
		this->_learned_materia = nullptr;
	}
	i = other._learned_materia_len;
	this->_learned_materia = new AMateria*[i];
	for(_learned_materia_len = 0; _learned_materia_len < i; _learned_materia_len++){
		this->_learned_materia[_learned_materia_len] = other._learned_materia[_learned_materia_len]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m){
	int i;
	if (m != nullptr && _learned_materia_len < 4){
		AMateria** tmp = new AMateria*[_learned_materia_len + 1];
		for (i = 0; i < _learned_materia_len; i++){
			tmp[i] = this->_learned_materia[i];
		}
		tmp[i] = m->clone();
		delete [] this->_learned_materia;
		this->_learned_materia = tmp;
		_learned_materia_len++;
	}
	else if (_learned_materia_len >= 4){
		std::cout << "You can't learn more than 4 materials!" << std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < _learned_materia_len; i++){
		if (_learned_materia[i]->getType() == type){
			return _learned_materia[i]->clone();
		}
	}
	std::cout << "Materia " << type <<" wasn't learned!" << std::endl;
	return nullptr;
}