#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

struct Data {
    std::string s1;
    int n;
    std::string s2;
};

char make_random_char();
void * serialize(void);
Data * deserialize(void * raw);

#endif