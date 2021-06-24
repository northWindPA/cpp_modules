#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>

#include "Zombie.hpp"

class ZombieHorde
{
	private:
		int 	_N;
		Zombie*	_zombies;

	public:
		ZombieHorde(int N);
		~ZombieHorde();
		void horde_announce();
};

#endif
