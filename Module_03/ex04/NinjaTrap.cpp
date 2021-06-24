#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(): ClapTrap()
{
	_energy_points = 120;
	_max_energy_points = 120;
	_melee_attack_damage = 60;
	std::cout << _name << " is here." << std::endl;
}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
	_hit_points = 60;
	_max_hit_points = 60;
	_energy_points = 120;
	_max_energy_points = 120;
	_level = 1;
	_melee_attack_damage = 60;
	_ranged_attack_damage = 5;
	_armor_damage_reduction = 0;
	_random_damage_tmp = 0;
	std::cout << _name << " is here." << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << _name << " is no more." << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy): ClapTrap(copy._name)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = copy;
}

NinjaTrap &NinjaTrap::operator = (const NinjaTrap &copy)
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


void NinjaTrap::ninjaShoebox(FragTrap &FragTrap)
{
	if (_energy_points >= 20)
	{
		std::cout <<_name << " is using fragtrap-" << FragTrap.get_name() << " as a club." << std::endl;
		_energy_points -= 20;
	}
	else
		std::cout << _name << " has not enough energy-points.";
}

void NinjaTrap::ninjaShoebox(ScavTrap &ScavTrap)
{
	if (_energy_points >= 20)
	{
		std::cout <<_name << " is using scavtrap-" << ScavTrap.get_name() << " as a knife." << std::endl;
		_energy_points -= 20;
	}
	else
		std::cout << _name << " has not enough energy-points.";
}

void NinjaTrap::ninjaShoebox(ClapTrap &ClapTrap)
{
	if (_energy_points >= 20)
	{
		std::cout <<_name << " is using claptrap-" << ClapTrap.get_name() << " as a sword." << std::endl;
		_energy_points -= 20;
	}
	else
		std::cout << _name << " has not enough energy-points.";
}

void NinjaTrap::ninjaShoebox(NinjaTrap &NinjaTrap)
{
	if (_energy_points >= 20)
	{
		std::cout <<_name << " is using ninjatrap-" << NinjaTrap.get_name() << " as a gun." << std::endl;
		_energy_points -= 20;
	}
	else
		std::cout << _name << " has not enough energy-points.";
}
