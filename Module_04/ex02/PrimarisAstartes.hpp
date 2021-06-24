#ifndef PRIMARISASTARTES_HPP
#define PRIMARISASTARTES_HPP

#include "ISpaceMarine.hpp"

#include <iostream>

class PrimarisAstartes: public ISpaceMarine
{
	public:
		PrimarisAstartes();
		virtual ~PrimarisAstartes();

		ISpaceMarine* clone() const;
		void battle_cry() const;
		void ranged_attack() const;
		void melee_attack() const;
};


#endif
