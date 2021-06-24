#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	protected:
		AWeapon();
		std::string _name;
		int 		_ap_cost;
		int 		_damage;

	public:
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon();
		AWeapon(AWeapon const &copy);
		AWeapon &operator = (const AWeapon &copy);

		std::string const &get_name() const;
		int get_ap_cost() const;
		int get_damage() const;
		virtual void attack() const = 0;
};

#endif
