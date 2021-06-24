#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP

#include <iostream>

class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine() {};
		virtual ISpaceMarine* clone() const = 0;
		virtual void battle_cry() const = 0;
		virtual void ranged_attack() const = 0;
		virtual void melee_attack() const = 0;
};

#endif
