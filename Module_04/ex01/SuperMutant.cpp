#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &copy)
: Enemy(copy)
{}

SuperMutant &SuperMutant::operator = (SuperMutant const &copy)
{
	_hp = copy._hp;
	_type = copy._type;
	return *this;
}

void SuperMutant::take_damage(int damage)
{
	if (damage > 3 && _hp > 0)
	{
		_hp -= (damage - 3);
		if (_hp < 0)
			_hp = 0;
	}
}
