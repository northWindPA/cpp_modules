#include "Weapon.hpp"

Weapon::Weapon(const std::string &type):
_type(type)
{
	std::cout << _type << " ready" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << _type << " weapon is no more" << std::endl;
}

void Weapon::setType(const std::string &type)
{
	std::cout << _type << " is no more" << std::endl;
	_type = type;
	std::cout << _type << " has been set" << std::endl;
}

const std::string &Weapon::getType()const
{
	return (_type);
}