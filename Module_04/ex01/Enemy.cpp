#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
: _hp(hp), _type(type)
{}

Enemy::~Enemy()
{}

Enemy::Enemy(Enemy const &copy)
{
	*this = copy;
}

Enemy &Enemy::operator = (Enemy const &copy)
{
	_hp = copy._hp;
	_type = copy._type;
	return *this;
}

int Enemy::get_hp() const
{
	return _hp;
}

std::string const Enemy::get_type() const
{
	return _type;
}

void Enemy::take_damage(int damage)
{
	if (damage > 0 && _hp > 0)
	{
		_hp -= damage;
		if (_hp < 0)
			_hp = 0;
	}
}