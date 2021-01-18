#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {
private:
	int	n;
	Zombie * zombie_arr;
public:
	ZombieHorde(int newN);
	~ZombieHorde();
	void	announce();
};

#endif
