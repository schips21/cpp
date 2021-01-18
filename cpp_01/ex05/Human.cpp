#include "Human.hpp"

Human::Human(){
	std::cout << "Human " << "is here!" << std::endl;
}

Human::~Human() {
	std::cout << "Human " << "has gone away!" << std::endl;
}

std::string	Human::identify() const
{
	return (hum_brain.Brain::identify());
}

const Brain&		Human::getBrain() const
{
	return (hum_brain);
}
