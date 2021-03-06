#include "span.hpp"

Span::Span() : _n(0) {

}

Span::Span(unsigned int n) : _n(n) {

}



void Span::addNumber(const int & num){
    if (_storage.size() == _n){
        throw Span::FullStorageException();
    }
    _storage.push_back(num);
}

void Span::addNumber(std::vector<int>::const_iterator it,
                     std::vector<int>::const_iterator ite){
//    if (ite - it + _storage.size() > _n){
//        throw Span::FullStorageException();
//    }
    while(it < ite){
        if (_storage.size() == _n){
            throw Span::FullStorageException();
        }
        _storage.push_back(*it);
        it++;
    }
}

int Span::shortestSpan(){
    if (_n < 2){
        throw TooSmallStorageException();
    }
    std::sort(_storage.begin(), _storage.end());
    std::vector<int>::const_iterator it;
    it = _storage.begin();
    it++;
    int min = std::abs(*it - *(it - 1));
    while (++it < _storage.end()){
        if(std::abs(*it - *(it - 1)) < min){
            min = std::abs(*it - *(it - 1));
        }
    }
    return min;
}

int Span::longestSpan(){
    if (_n < 2){
        throw TooSmallStorageException();
    }
    int max_el = *std::max_element(_storage.begin(), _storage.end());
    int min_el = *std::min_element(_storage.begin(), _storage.end());
    int span = std::abs(max_el - min_el);
    return span;
}

std::vector<int> Span::GetVect(){
    return _storage;
}