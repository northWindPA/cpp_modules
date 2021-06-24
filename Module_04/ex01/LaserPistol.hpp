#ifndef LASERPISTOL_H
#define LASERPISTOL_H

#include "AWeapon.hpp"

class LaserPistol: public AWeapon
{
	public:
		LaserPistol();
		virtual ~LaserPistol();
		LaserPistol(LaserPistol const &copy);
		LaserPistol &operator = (const LaserPistol &copy);

		void attack() const;
};


#endif
