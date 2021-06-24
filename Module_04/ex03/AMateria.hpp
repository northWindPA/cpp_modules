#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria;

#include "ICharacter.hpp"

class AMateria
{
	private:
		AMateria();

	protected:
		std::string _type;
		unsigned int _xp;

	public:
		AMateria(std::string const &type);
		virtual ~AMateria();
		AMateria(const AMateria &copy);
		AMateria &operator = (const AMateria &copy);

		std::string const &get_type() const;
		unsigned int get_xp() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
