#include "ScavTrap.hpp"

std::string ScavTrap::_event_line[10] =
{

	"It's gachi time!",
	"Focking slaves! Time to obey!",
	"Oh shit, am sorry! Go further.",
	"I'll show you who's the boss of this gym! Fight me!",
	"Gachi bless on you! There's no secrets.",
	"Fock you! Go back!",
	"Three hundred bucks! And key is yours.",
	"Without further interruption, let's celebrate and suck some lollipop!",
	"Oh fock you leatherman! Ballroom dance hall is the floor above!",
	"Dungeon master! Thank you sir!"
};

ScavTrap::ScavTrap(std::string name)
:_name(name)
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 50;
	_max_energy_points = 50;
	_level = 1;
	_melee_attack_damage = 20;
	_ranged_attack_damage = 15;
	_armor_damage_reduction = 3;
	_random_damage_tmp = 0;
	std::cout << _name << " is here." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << _name << " is no more." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = copy;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << _name << " attacks " << target << " at melee, causing " << _melee_attack_damage << " points of damage!" << std::endl;
}

std::string ScavTrap::get_name()
{
	return (_name);
}

unsigned int ScavTrap::get_melee()
{
	return (_melee_attack_damage);
}

unsigned int ScavTrap::get_range()
{
	return (_ranged_attack_damage);
}

unsigned int ScavTrap::get_ran_dam_tmp()
{
	return (_random_damage_tmp);
}

void ScavTrap::takeDamage(unsigned int amount)
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

void ScavTrap::beRepaired(unsigned int amount)
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

void ScavTrap::challengeNewcomer(std::string const &target)
{
	std::cout << _name << " " << target << " hey I challenge you!!! " << _event_line[rand() % 9] << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &copy)
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