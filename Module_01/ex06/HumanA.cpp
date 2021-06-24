#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &Weapon)
: _name(name), _weapon(Weapon)
{
	std::cout << _name << " have got " <<_weapon.getType() << " and ready" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << _name << " is no more" << std::endl;
}

void HumanA::attack()
{
	std::cout << _name << " attacks using " << _weapon.getType() << std::endl;
}