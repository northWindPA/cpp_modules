#include "Character.hpp"

Character::Character()
: _name(std::string()), _action_points(0), _current_weapon(nullptr)
{}

Character::Character(std::string const &name)
: _name(name), _action_points(40), _current_weapon(nullptr)
{}

Character::~Character()
{
	std::cout << _name << " is dead." << std::endl;
}

Character::Character(Character const &copy)
{
	*this = copy;
}

Character &Character::operator = (Character const &copy)
{
	_name = copy._name;
	_action_points = copy._action_points;
	_current_weapon = copy._current_weapon;
	return *this;
}

void Character::recover_ap()
{
	_action_points += 10;
	if (_action_points > 40)
		_action_points = 40;
}

void Character::equip(AWeapon *weapon)
{
	if (!weapon)
		return ;
	_current_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (!_current_weapon || !enemy)
		return ;
	if (_action_points < _current_weapon->get_ap_cost())
	{
		std::cout << "No action points!" << std::endl;
		return;
	}
	_action_points -= _current_weapon->get_ap_cost();
	std::cout << _name << " attacks " << enemy->get_type() << " with a " << _current_weapon->get_name() << std::endl;
	_current_weapon->attack();
	enemy->take_damage(_current_weapon->get_damage());
	if (enemy->get_hp() <= 0)
		delete enemy;
}

std::ostream &operator << (std::ostream &out, Character const &character)
{
	if (character.get_weapon())
	{
		out << character.get_name() << " has " << character.get_ap() << " ap" << " and wields a " << character.get_weapon()->get_name() << std::endl;
	}
	else
	{
		out << character.get_name() << " has " << character.get_ap() << " and is unarmed" << std::endl;
	}
	return out;
}

std::string const &Character::get_name() const
{
	return _name;
}

int Character::get_ap() const
{
	return _action_points;
}

AWeapon *Character::get_weapon() const
{
	return _current_weapon;
}
