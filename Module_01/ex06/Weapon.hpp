#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		Weapon();
		std::string _type;
	public:
		Weapon(const std::string &weapon);
		~Weapon();
		void setType(const std::string &type);
		const std::string &getType()const;
};

#endif