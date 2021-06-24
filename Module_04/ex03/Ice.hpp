#ifndef ICE_H
#define ICE_H

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		virtual ~Ice();
		Ice(Ice const &copy);
		Ice &operator = (Ice const &copy);

		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif
