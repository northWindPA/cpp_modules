#include "Ghoul.hpp"

Ghoul::Ghoul(): Enemy(100, "Ghoul")
{
	std::cout << "Ghaa Ghaa Ghaa!" << std::endl;
}

Ghoul::~Ghoul()
{
	std::cout << "Ghaargh..." << std::endl;
}

Ghoul::Ghoul(Ghoul const &copy)
: Enemy(copy)
{}

Ghoul &Ghoul::operator = (Ghoul const &copy)
{
	_hp = copy._hp;
	_type = copy._type;
	return *this;
}

void Ghoul::take_damage(int damage)
{
	if (damage > 3 && _hp > 0)
	{
		_hp -= (damage - 3);
		if (_hp < 0)
			_hp = 0;
	}
}
