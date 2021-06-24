#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#include <iostream>

class NinjaTrap: public ClapTrap
{
	private:
		NinjaTrap();

	public:
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap &copy);
		~NinjaTrap();
		NinjaTrap &operator = (const NinjaTrap &copy);

		void ninjaShoebox(FragTrap &FragTrap);
		void ninjaShoebox(ScavTrap &ScavTrap);
		void ninjaShoebox(ClapTrap &ClapTrap);
		void ninjaShoebox(NinjaTrap &NinjaTrap);
};

#endif