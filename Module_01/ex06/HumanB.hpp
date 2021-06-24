#ifndef CPP_HUMANB_HPP
#define CPP_HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{

private:
	const std::string _name;
	const Weapon	*_weapon;
public:
	HumanB(const std::string name);
	~HumanB();
	void setWeapon(Weapon &Weapon);
	void attack();
};


#endif