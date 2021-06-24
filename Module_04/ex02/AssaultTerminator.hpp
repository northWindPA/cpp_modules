#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
	public:
		AssaultTerminator();
		virtual ~AssaultTerminator();

		ISpaceMarine* clone() const;
		void battle_cry() const;
		void ranged_attack() const;
		void melee_attack() const;
};


#endif
