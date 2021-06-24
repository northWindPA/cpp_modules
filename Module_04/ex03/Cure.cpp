#include "Cure.hpp"

Cure::Cure()
: AMateria("cure")
{}

Cure::~Cure()
{}

Cure::Cure(Cure const &copy)
: AMateria(copy)
{}

Cure &Cure::operator = (Cure const &copy)
{
	AMateria::operator = (copy);
	return (*this);
}

AMateria *Cure::clone() const
{
	Cure *copy = new Cure(*this);
	return (copy);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.get_name() << "’s wounds *" << std::endl;
	AMateria::use(target);
}