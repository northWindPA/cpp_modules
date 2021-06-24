#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: virtual public FragTrap, virtual public NinjaTrap
{
	private:
		SuperTrap();

	public:
		SuperTrap(std::string name);
		SuperTrap(const SuperTrap &copy);
		~SuperTrap();
		SuperTrap &operator = (const SuperTrap &copy);

		void class_parameters() const;
};

#endif
