#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
: AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::~PlasmaRifle()
{
	std::cout << this->_name << " pR destroyed" << std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy)
: AWeapon(copy)
{}

PlasmaRifle &PlasmaRifle::operator = (const PlasmaRifle &copy)
{
	this->_name = copy._name;
	this->_ap_cost = copy._ap_cost;
	this->_damage = copy._damage;
	return *this;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu " << "piouuu " << "piouuu *" << std::endl;
}