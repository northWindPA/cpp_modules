#ifndef IMATERIASOURCE_H
#define IMATERIASOURCE_H

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learn_materia(AMateria*) = 0;
		virtual AMateria* create_materia(std::string const & type) = 0;
};

#endif
