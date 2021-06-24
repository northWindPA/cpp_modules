#ifndef POWERFIST_H
#define POWERFIST_H

#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	public:
		PowerFist();
		virtual ~PowerFist();
		PowerFist(PowerFist const &copy);
		PowerFist &operator = (const PowerFist &copy);

		void attack() const;
};


#endif
