#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
: _type(type), _xp(0)
{}

AMateria::~AMateria()
{}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria &AMateria::operator = (const AMateria &copy)
{
	if (this == &copy)
		return *this;
	_type = copy._type;
	_xp = copy._xp;
	return *this;
}

std::string const &AMateria::get_type() const
{
	return (_type);
}

unsigned int AMateria::get_xp() const
{
	return (_xp);
}

void AMateria::use(ICharacter &target)
{
	_xp += 10;
	(void)target;
}