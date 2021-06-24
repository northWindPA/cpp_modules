#ifndef ISQUAD_H
#define ISQUAD_H

#include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual ~ISquad() {};
		virtual int get_count() const = 0;
		virtual ISpaceMarine* get_unit(int) const = 0;
		virtual int push(ISpaceMarine*) = 0;
};

#endif
