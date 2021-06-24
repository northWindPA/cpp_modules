#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

ISpaceMarine* AssaultTerminator::clone() const
{
	AssaultTerminator *clone = new AssaultTerminator(*this);
	return  (clone);
}

void AssaultTerminator::battle_cry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::ranged_attack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::melee_attack() const
{
	std::cout <<  "* attacks with chainfists *" << std::endl;
}