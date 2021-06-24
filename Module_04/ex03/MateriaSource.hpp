#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*_materia_sources[4];

	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(MateriaSource const &copy);
		MateriaSource &operator = (MateriaSource const &copy);

		void learn_materia(AMateria *amateria);
		AMateria* create_materia(std::string const & type);
};


#endif
