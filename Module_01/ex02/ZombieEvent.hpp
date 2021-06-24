#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>

#include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string _type;
		int			_level;

	public:
		ZombieEvent();
		~ZombieEvent();
		Zombie* newZombie(std::string name);
		void setZombieType(std::string type);
		void setZombieLevel(int level);
		void randomChump();
};

#endif
