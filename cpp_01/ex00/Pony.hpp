#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony {
private:
	std::string	name;
	std::string	colour;
	int			years_old;

public:
	Pony(const std::string &n, const std::string &c, const int &y);
	~Pony();
	void	pony_intro();
};

void	ponyOnTheHeap(const std::string &name);
void	ponyOnTheStack(const std::string &name);

#endif