#ifndef FIRE_H
#define FIRE_H

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Fire: public AMateria
{
	public:
		Fire();
		virtual ~Fire();
		Fire(Fire const &copy);
		Fire &operator = (Fire const &copy);

		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif
