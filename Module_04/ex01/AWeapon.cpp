#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
: _name(name), _ap_cost(apcost), _damage(damage)
{}

AWeapon::~AWeapon()
{
	std::cout << _name << " weapon destroyed" << std::endl;
}

AWeapon::AWeapon(AWeapon const &copy)
{
	*this = copy;
}

AWeapon &AWeapon::operator = (const AWeapon &copy)
{
	_name = copy._name;
	_ap_cost = copy._ap_cost;
	_damage = copy._damage;
	return *this;
}

std::string const &AWeapon::get_name() const
{
	return (_name);
}

int AWeapon::get_ap_cost() const
{
	return (_ap_cost);
}

int AWeapon::get_damage() const
{
	return (_damage);
}