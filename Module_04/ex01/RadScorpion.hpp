#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion: public Enemy
{
	public:
		RadScorpion();
		~RadScorpion();
		RadScorpion(RadScorpion const &copy);
		RadScorpion &operator = (RadScorpion const &copy);

		void take_damage(int damage);

};


#endif
