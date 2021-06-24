#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Enemy.hpp"
#include "AWeapon.hpp"

#include <iostream>

class Character
{
	private:
		Character();
		std::string _name;
		int			_action_points;
		AWeapon		*_current_weapon;

	public:
		Character(std::string const &name);
		~Character();
		Character(Character const &copy);
		Character &operator = (Character const &copy);

		void recover_ap();
		int get_ap() const;
		void attack(Enemy *enemy);
		AWeapon *get_weapon() const;
		void equip(AWeapon *weapon);
		std::string const &get_name() const;
};

std::ostream &operator << (std::ostream &out, Character const &character);

#endif
