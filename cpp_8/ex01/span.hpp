#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span{
private:
    unsigned int _n;
    std::vector<int> _storage;
public:
    Span();
    Span(unsigned int n);

    void addNumber(const int & num);
    void addNumber(std::vector<int>::const_iterator it, std::vector<int>::const_iterator ite);
    int shortestSpan();
    int longestSpan();

    std::vector<int> GetVect();

    class FullStorageException : public std::exception {
    public:
        virtual const char *what() const throw(){
            return "Storage is already full";
        };
    };

    class TooSmallStorageException : public std::exception {
    public:
        virtual const char *what() const throw(){
            return "There are too little values in storage to find span";
        };
    };
};

#endif
