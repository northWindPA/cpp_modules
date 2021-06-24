#include "Ice.hpp"

Ice::Ice()
: AMateria("ice")
{}

Ice::~Ice()
{}

Ice::Ice(Ice const &copy)
: AMateria(copy)
{}

Ice &Ice::operator = (Ice const &copy)
{
	AMateria::operator=(copy);
	return (*this);
}

AMateria *Ice::clone() const
{
	Ice *copy = new Ice(*this);
	return (copy);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.get_name() <<" *" << std::endl;
	AMateria::use(target);
}