#ifndef SQUAD_H
#define SQUAD_H

#include "ISquad.hpp"

#include <iostream>

class Squad: public ISquad
{
	private:
		int _squad_count;
		ISpaceMarine **_units;

	public:
		Squad();
		virtual ~Squad();
		Squad(Squad const &copy);
		Squad &operator = (Squad const &copy);

		int get_count() const;
		ISpaceMarine* get_unit(int index) const;
		int push(ISpaceMarine *unit);
};


#endif
