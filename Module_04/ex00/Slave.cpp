#include "Slave.hpp"

Slave::Slave(std::string name)
: Victim(name)
{
	std::cout << "Work again..." << std::endl;
}

Slave::~Slave()
{
	std::cout << "Finally, I'm free!" << std::endl;
}

Slave::Slave(const Slave &copy)
: Victim(copy)
{
	*this = copy;
}

Slave &Slave::operator = (const Slave &copy)
{
	_name = copy._name;
	return (*this);
}

void Slave::get_polymorphed() const
{
	std::cout << _name << " has been turned into a squirrel!" << std::endl;
}