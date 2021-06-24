#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click" << " click" << " click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &copy)
: Enemy(copy)
{}

RadScorpion &RadScorpion::operator = (RadScorpion const &copy)
{
	_hp = copy._hp;
	_type = copy._type;
	return *this;
}

void RadScorpion::take_damage(int damage)
{
	if (damage > 0 && _hp > 0)
	{
		_hp -= damage;
		if (_hp < 0)
			_hp = 0;
	}
}
