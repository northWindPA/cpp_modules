#include "PrimarisAstartes.hpp"

PrimarisAstartes::PrimarisAstartes()
{
	std::cout << "Primaris here! For the Emperor!" << std::endl;
}

PrimarisAstartes::~PrimarisAstartes()
{
	std::cout << "Golden Throne calls me!" << std::endl;
}

ISpaceMarine* PrimarisAstartes::clone() const
{
	PrimarisAstartes *clone = new PrimarisAstartes();
	return (clone);
}

void PrimarisAstartes::battle_cry() const
{
	std::cout << "For the holy Terra! For our Father!" << std::endl;
}

void PrimarisAstartes::ranged_attack() const
{
	std::cout << "* attacks with a storm-bolter *" << std::endl;
}

void PrimarisAstartes::melee_attack() const
{
	std::cout << "* attacks with a nemesis-sword *" << std::endl;
}