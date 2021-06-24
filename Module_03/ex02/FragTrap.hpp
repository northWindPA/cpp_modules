#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <iostream>

class FragTrap: public ClapTrap
{
	private:
		static std::string _attack_line[10];
		FragTrap();

	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		FragTrap &operator = (const FragTrap &copy);
		~FragTrap();

		void vaulthunter_dot_exe(std::string const &target);
};

#endif
