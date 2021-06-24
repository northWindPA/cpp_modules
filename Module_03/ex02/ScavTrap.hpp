#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#include <iostream>

class ScavTrap: public ClapTrap
{
	private:
		static std::string _event_line[10];
		ScavTrap();

	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		~ScavTrap();
		ScavTrap &operator = (const ScavTrap &copy);

		void challengeNewcomer(std::string const &target);
};


#endif
