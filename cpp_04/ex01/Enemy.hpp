#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class	 Enemy{
protected:
	std::string _type;
	int _hp;
public:
	Enemy();
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy& other);
	virtual ~Enemy();
	Enemy & operator=( const Enemy& other );

	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int damage);
};

#endif