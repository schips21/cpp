#include "Data.hpp"

int main(){
	void * raw = serialize();
	Data * data = deserialize(raw);
	std::cout << std::endl << "Data after deserialization:" << std::endl;
	std::cout << data->s1 << std::endl << data->n << std::endl << data->s2 << std::endl;
	return 0;
}