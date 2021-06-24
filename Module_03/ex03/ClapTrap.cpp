#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name)
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_melee_attack_damage = 100;
	_ranged_attack_damage = 100;
	_armor_damage_reduction = 10;
	_random_damage_tmp = 0;
	std::cout << _name << "(claptrap-parent constructor) is here." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " is no more." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = copy;
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << _name << " attacks " << target << " at melee, causing " << _melee_attack_damage << " points of damage!" << std::endl;
}

std::string ClapTrap::get_name()
{
	return (_name);
}

unsigned int ClapTrap::get_melee()
{
	return (_melee_attack_damage);
}

unsigned int ClapTrap::get_range()
{
	return (_ranged_attack_damage);
}

unsigned int ClapTrap::get_ran_dam_tmp()
{
	return (_random_damage_tmp);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < _armor_damage_reduction)
		amount = _armor_damage_reduction;
	unsigned int reducted_damage = amount - _armor_damage_reduction;
	if (reducted_damage < 0)
		reducted_damage = 0;
	if (_hit_points <= reducted_damage)
	{
		_hit_points = 0;
		std::cout << _name << " takes " << reducted_damage << " points of damage!" << std::endl;
		std::cout << _name << " has " << _hit_points << " hit-points!" << std::endl;
	}
	else
	{
		_hit_points = _hit_points - reducted_damage;
		std::cout << _name << " takes " << reducted_damage << " points of damage!" << std::endl;
		std::cout << _name << " has " << _hit_points << " hit-points!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_hit_points = _hit_points + amount;
	if (_hit_points > _max_hit_points)
	{
		amount = amount - (_hit_points - _max_hit_points);
		_hit_points = _max_hit_points;
	}
	std::cout << _name << " is healed with " << amount << " healthpoints!" << std::endl;
	std::cout << _name << " has " << _hit_points << " hit-points!" << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &copy)
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
	_random_damage_tmp = copy._random_damage_tmp;
	return (*this);
}