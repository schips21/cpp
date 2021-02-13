#include "Converter.hpp"

int main(int argc, char** argv){
	if (argc != 2){
		std::cout << "Invalid argument" << std::endl;
		return 0;
	}
	try{
		Converter convert(argv[1]);
		convert.cast();
	}
	catch (const std::exception& err){
		std::cout << "Invalid format for argument" << std::endl;
	}
	return 0;
}