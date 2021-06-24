#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine* TacticalMarine::clone() const
{
	TacticalMarine *clone = new TacticalMarine();
	return (clone);
}

void TacticalMarine::battle_cry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::ranged_attack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::melee_attack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}