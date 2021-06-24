#ifndef CURE_H
#define CURE_H

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		virtual ~Cure();
		Cure(Cure const &copy);
		Cure &operator = (Cure const &copy);

		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif
