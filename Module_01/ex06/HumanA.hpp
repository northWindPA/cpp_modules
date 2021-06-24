#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	const std::string	_name;
	Weapon				&_weapon;

public:
	HumanA(const std::string name, Weapon &Weapon);
	~HumanA();
	void attack();
};


#endif