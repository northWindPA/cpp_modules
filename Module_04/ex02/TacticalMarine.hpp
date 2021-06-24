#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

#include <iostream>

class TacticalMarine: public ISpaceMarine
{
	public:
		TacticalMarine();
		virtual ~TacticalMarine();

		ISpaceMarine* clone() const;
		void battle_cry() const;
		void ranged_attack() const;
		void melee_attack() const;
};


#endif
