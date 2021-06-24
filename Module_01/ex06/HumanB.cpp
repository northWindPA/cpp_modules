#include "HumanB.hpp"

HumanB::HumanB(const std::string name)
: _name(name)
{
	std::cout << _name << " have got bare hands and ready" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << _name << " is no more" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attacks using " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks using bare hands" << std::endl;
}