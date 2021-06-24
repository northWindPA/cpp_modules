#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
: _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead." << " Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy)
{
	*this = copy;
}

Sorcerer &Sorcerer::operator = (const Sorcerer &copy)
{
	_name = copy._name;
	_title = copy._title;
	return (*this);
}

std::string const &Sorcerer::get_name() const
{
	return (_name);
}

std::string const &Sorcerer::get_title() const
{
	return (_title);
}

void Sorcerer::polymorph(const Victim &victim) const
{
	victim.get_polymorphed();
}

std::ostream &operator << (std::ostream &out, const Sorcerer &sorcerer)
{
	out << "I'm " << sorcerer.get_name() << ", " << sorcerer.get_title() <<", and I like ponies!" << std::endl;
	return (out);
}