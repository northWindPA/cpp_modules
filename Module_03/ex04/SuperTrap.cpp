#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name): ClapTrap(name), FragTrap(), NinjaTrap()
{
	std::cout << _name << " is here." << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << _name << " is no more." << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &copy): ClapTrap(copy._name), FragTrap(copy._name), NinjaTrap(copy._name)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

SuperTrap &SuperTrap::operator = (const SuperTrap &copy)
{
	_hit_points = copy._hit_points;
	_max_hit_points = copy._max_hit_points;
	_energy_points = copy._energy_points;
	_max_energy_points = copy._max_energy_points;
	_level = copy._level;
	_name = copy._name;
	_melee_attack_damage = copy._melee_attack_damage;
	_ranged_attack_damage = copy._ranged_attack_damage;
	_armor_damage_reduction = copy._armor_damage_reduction;
	return (*this);
}

void SuperTrap::class_parameters() const
{
	std::cout << _hit_points << std::endl;
	std::cout << _max_hit_points << std::endl;
	std::cout << _energy_points << std::endl;
	std::cout << _max_energy_points << std::endl;
	std::cout << _level << std::endl;
	std::cout << _name << std::endl;
	std::cout << _melee_attack_damage << std::endl;
	std::cout << _ranged_attack_damage << std::endl;
	std::cout << _armor_damage_reduction << std::endl;
}