#include "whatever.hpp"

int main(){
	int a = 5;
	int b = 1;
	std::cout << "Test with int" << std::endl;
	std::cout << "Before swap: a = " <<  a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "After swap: a = " <<  a << ", b = " << b << std::endl;
	std::cout << "max: " << ::max(a, b) << std::endl;
	std::cout << "min: " << ::min(a, b) << std::endl;


	std::string str1 = "Hello";
	std::string str2 = "world";
	std::cout << std::endl << "Test with string" << std::endl;
	std::cout << "Before swap: str1 = " << str1 << ", str2 = " << str2 << std::endl;
	::swap(str1, str2);
	std::cout << "After swap: str1 = " << str1 << ", str2 = " << str2 << std::endl;
	std::cout << "max: " << ::max(str1, str2) << std::endl;
	std::cout << "min: " << ::min(str1, str2) << std::endl;


	Awesome aw_1(10);
	Awesome aw_2(6);
	std::cout << std::endl << "Test with Awesome class" << std::endl;
	std::cout << "Before swap: aw_1 = " << aw_1 << ", aw_2 = " << aw_2 << std::endl;
	::swap(aw_1, aw_2);
	std::cout << "After swap: aw_1 = " << aw_1 << ", aw_2 = " << aw_2 << std::endl;
	Awesome max = ::max(aw_1, aw_2);
	Awesome min = ::min(aw_1, aw_2);
	std::cout << "max: " << max << std::endl;
	std::cout << "min: " << min << std::endl;

	return 0;
}