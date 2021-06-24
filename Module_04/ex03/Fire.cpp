#include "Fire.hpp"

Fire::Fire()
: AMateria("Fire")
{}

Fire::~Fire()
{}

Fire::Fire(Fire const &copy)
: AMateria(copy)
{}

Fire &Fire::operator = (Fire const &copy)
{
	AMateria::operator=(copy);
	return (*this);
}

AMateria *Fire::clone() const
{
	Fire *copy = new Fire(*this);
	return (copy);
}

void Fire::use(ICharacter &target)
{
	std::cout << "* shoots an fire-ball at " << target.get_name() <<" *" << std::endl;
	AMateria::use(target);
}