#include "Pony.hpp"

void	ponyOnTheHeap(const std::string &name)
{
	std::cout << "There is ponyOnTheHeap!" << std::endl;
	Pony *pony_heap = new Pony (name, "Grey", 5);
	pony_heap->pony_intro();
	delete(pony_heap);
}

void	ponyOnTheStack(const std::string &name)
{
	std::cout << "There is ponyOnTheStack!" << std::endl;
	Pony pony_stack (name, "Brown", 3);
	pony_stack.pony_intro();
}

int main()
{
	ponyOnTheHeap("Tuzik");
	std::cout << std::endl;
	ponyOnTheStack("Bobik");
	return (0);
}