#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template<class T>
class MutantStack : public std::stack<T>{
public:
    MutantStack() : std::stack<T>(){

    }

    MutantStack(const MutantStack & other) : std::stack<T>(other){

    }

    virtual ~MutantStack(){

    }

    MutantStack &operator=(const MutantStack & other){
        this->c = other.c;
        return *this;
    }

    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin(){
        return this->c.begin();
    }

    iterator end(){
        return this->c.end();
    }
};

#endif