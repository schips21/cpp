#include <iostream>

int		main ()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "Ordinary string: " << str << std::endl;
	std::cout << "Pointer to string: " << *ptr << std::endl;
	std::cout << "Reference to string: " << ref << std::endl;
}