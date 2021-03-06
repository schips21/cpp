#include "mutantstack.hpp"
#include <list>


int main(){
	std::cout << "Test from subject" << std::endl;
	MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);


	std::cout << std::endl;
	std::cout << "Test with MutantStack<char>" << std::endl;
	MutantStack<char> mstack_char;
	mstack_char.push('a');
	mstack_char.push('f');
	std::cout << mstack_char.top() << std::endl;
	mstack_char.pop();
	std::cout << mstack_char.size() << std::endl;
	mstack_char.push('w');
	mstack_char.push('5');
	mstack_char.push('.');
	mstack_char.push('0');
	MutantStack<char>::iterator it_c = mstack_char.begin();
	MutantStack<char>::iterator ite_c = mstack_char.end();
	++it_c;
	--it_c;
	while (it_c != ite_c)
	{
		std::cout << *it_c << std::endl;
		++it_c;
	}
	std::stack<char> c(mstack_char);


    std::cout << std::endl;
	std::cout << "Test with list: the result should be the same" << std::endl;
	std::list<int> l;
	l.push_back(5);
	l.push_back(17);
	std::cout << l.back() << std::endl;
	l.pop_back();
	std::cout << l.size() << std::endl;
	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	l.push_back(0);
	std::list<int>::iterator itl = l.begin();
	std::list<int>::iterator itel = l.end();
	++itl;
	--itl;
	while (itl != itel)
	{
		std::cout << *itl << std::endl;
		++itl;
	}
	std::list<int> l2(l);
	return 0;
}