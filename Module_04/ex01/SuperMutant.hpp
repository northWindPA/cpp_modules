#ifndef SUPERMUTANT_H
#define SUPERMUTANT_H

#include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:
		SuperMutant();
		~SuperMutant();
		SuperMutant(SuperMutant const &copy);
		SuperMutant &operator = (SuperMutant const &copy);

		void take_damage(int damage);
};


#endif
