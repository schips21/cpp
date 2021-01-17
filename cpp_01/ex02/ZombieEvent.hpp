#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {
private:
	std::string type;
public:
	ZombieEvent();
	~ZombieEvent();
	void		setZombieType(const std::string &type);
	Zombie*		newZombie(std::string name);
};

#endif
