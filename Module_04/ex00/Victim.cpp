#include "Victim.hpp"

Victim::Victim(std::string name)
: _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim &copy)
{
	*this = copy;
}

Victim &Victim::operator = (const Victim &copy)
{
	_name = copy._name;
	return (*this);
}

std::string const &Victim::get_name() const
{
	return (_name);
}

void Victim::get_polymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator << (std::ostream &out, const Victim &victim)
{
	out << "I'm " << victim.get_name() << " and I like otters!" << std::endl;
	return (out);
}