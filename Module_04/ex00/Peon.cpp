#include "Peon.hpp"

Peon::Peon(std::string name)
: Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon &copy)
: Victim(copy)
{
	*this = copy;
}

Peon &Peon::operator = (const Peon &copy)
{
	_name = copy._name;
	return (*this);
}

void Peon::get_polymorphed() const
{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}