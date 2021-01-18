#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string	name;
	std::string	type;
public:
	Zombie();
	~Zombie();
	void	announce();
	void	setZombieName(const std::string &newName);
};

#endif
