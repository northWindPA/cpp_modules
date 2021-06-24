#include "Character.hpp"

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_materia_pack[i] == nullptr)
		{
			_materia_pack[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		if (_materia_pack[idx])
			_materia_pack[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4)
		if (_materia_pack[idx])
			_materia_pack[idx]->use(target);
}

const std::string &Character::get_name() const
{
	return _name;
}

Character::Character()
{}

Character::Character(const std::string &name)
: _name(name)
{
	for (int i = 0; i < 4; ++i)
	{
		_materia_pack[i] = nullptr;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		if (_materia_pack[i])
			delete _materia_pack[i];
	}
}

Character &Character::operator=(const Character &other)
{
	if (this == &other)
		return *this;
	for (int i = 0; i < 4; ++i)
	{
		if (_materia_pack[i])
			delete _materia_pack[i];
	}
	_name = other._name;
	for (int i = 0; i < 4; ++i)
	{
		_materia_pack[i] = other._materia_pack[i];
	}
	return *this;
}

Character::Character(const Character &other)
{
	*this = other;
}

