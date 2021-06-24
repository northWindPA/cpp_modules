#ifndef GHOUL_H
#define GHOUL_H

#include "Enemy.hpp"

class Ghoul: public Enemy
{
	public:
		Ghoul();
		~Ghoul();
		Ghoul(Ghoul const &copy);
		Ghoul &operator = (Ghoul const &copy);

		void take_damage(int damage);
};

#endif
