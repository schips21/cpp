#include "Pony.hpp"

Pony::Pony(const std::string &n, const std::string &c, const int &y) {
	name = n;
	colour = c;
	years_old = y;

	std::cout << "Pony " << this->name << " is here!" << std::endl;
}

Pony::~Pony() {
	std::cout << "Pony " << this->name << " has gone away!" << std::endl;
}

void	Pony::pony_intro()
{
	std::cout << "Hi! I'm pony " << name << " " << years_old << " years old." << std::endl;
	std::cout << "I have beautiful " << colour << " hair." << std::endl;
}
