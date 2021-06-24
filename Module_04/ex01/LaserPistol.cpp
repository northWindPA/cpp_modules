#include "LaserPistol.hpp"

LaserPistol::LaserPistol()
: AWeapon("Plasma Rifle", 2, 10)
{}

LaserPistol::~LaserPistol()
{
	std::cout << this->_name << " lP destroyed" << std::endl;
}

LaserPistol::LaserPistol(LaserPistol const &copy)
: AWeapon(copy)
{}

LaserPistol &LaserPistol::operator = (const LaserPistol &copy)
{
	this->_name = copy._name;
	this->_ap_cost = copy._ap_cost;
	this->_damage = copy._damage;
	return *this;
}

void LaserPistol::attack() const
{
	std::cout << "* skkrryyaa " << "skkrryyaa " << "skkrryyaa *" << std::endl;
}