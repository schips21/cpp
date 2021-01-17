#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string	name;
	std::string	type;
public:
	Zombie(const std::string &newName, const std::string &newType);
	~Zombie();
	void	announce();
};

#endif
