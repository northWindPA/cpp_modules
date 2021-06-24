#include "PowerFist.hpp"

PowerFist::PowerFist()
: AWeapon("Power Fist", 8, 50)
{}

PowerFist::~PowerFist()
{
	std::cout << _name << " pF destroyed" << std::endl;
}

PowerFist::PowerFist(PowerFist const &copy)
: AWeapon(copy)
{}

PowerFist &PowerFist::operator = (const PowerFist &copy)
{
	_name = copy._name;
	_ap_cost = copy._ap_cost;
	_damage = copy._damage;
	return *this;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... " << "SBAM! *" << std::endl;
}