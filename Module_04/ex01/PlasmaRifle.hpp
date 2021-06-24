#ifndef PLASMARIFLE_H
#define PLASMARIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
	public:
		PlasmaRifle();
		virtual ~PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &copy);
		PlasmaRifle &operator = (const PlasmaRifle &copy);

		void attack() const;
};


#endif
