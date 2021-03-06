#include "easyfind.hpp"

int main(){
	std::cout << "Test with vector:" << std::endl;
	std::vector<int> v;
	for (int i = 0; i < 7; i++){
		v.push_back(i);
	}
	std::vector<int>::const_iterator it;
	try{
		it = easyfind(v, 5);
		std::cout << *it << std::endl;
	}
	catch (const NotFoundException & ex){
		std::cout << ex.what() << std::endl;
	}
	try{
		it = easyfind(v, -1);
		std::cout << *it << std::endl;
	}
	catch (const NotFoundException & ex){
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl << "Test with array:" << std::endl;
	std::array<int, 3> a = { 20, 100, 500 };
	std::array<int, 3>::const_iterator it_a;
	try{
		it_a = easyfind(a, 100);
		std::cout << *it_a << std::endl;
	}
	catch (const NotFoundException & ex){
		std::cout << ex.what() << std::endl;
	}
	try{
		it_a = easyfind(a, 10);
		std::cout << *it_a << std::endl;
	}
	catch (const NotFoundException & ex){
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl << "Test with list:" << std::endl;
	std::list<int> l;
	l.push_back(-4);
	l.push_back(-3);
	l.push_back(-2);
	std::list<int>::const_iterator it_l;
	try{
		it_l = easyfind(l, -3);
		std::cout << *it_l << std::endl;
	}
	catch (const NotFoundException & ex){
		std::cout << ex.what() << std::endl;
	}
	try{
		it_l = easyfind(l, 10);
		std::cout << *it_l << std::endl;
	}
	catch (const NotFoundException & ex){
		std::cout << ex.what() << std::endl;
	}
	return 0;
}