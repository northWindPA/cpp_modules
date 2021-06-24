#include "FragTrap.hpp"

std::string FragTrap::_attack_line[10] =
{

	"Spider in da face!",
	"Giant tree coming!",
	"Bully teenager kicking da ass!",
	"Dragon poop coming!",
	"Ass blowing!",
	"Fat man's fart in da face!",
	"Dendi face!",
	"Rocky Balboa's motivational speech!",
	"Cowabunga!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!",
	"For the EMPEROR!!! Die heretic!"
};

FragTrap::FragTrap(std::string name)
:_name(name)
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;
	_random_damage_tmp = 0;
	std::cout << _name << " is here." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << _name << " is no more." << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = copy;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << _name << " attacks " << target << " at melee, causing " << _melee_attack_damage << " points of damage!" << std::endl;
}

std::string FragTrap::get_name()
{
	return (_name);
}

unsigned int FragTrap::get_melee()
{
	return (_melee_attack_damage);
}

unsigned int FragTrap::get_range()
{
	return (_ranged_attack_damage);
}

unsigned int FragTrap::get_ran_dam_tmp()
{
	return (_random_damage_tmp);
}

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
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

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int damage;
	unsigned int random_damage;
	if (_energy_points >= 25)
	{
		_energy_points -= 25;
		damage = rand () % 40;
		if (damage < 0)
			damage = 15;
		random_damage = damage;
		_random_damage_tmp = random_damage;
		std::cout << _name << " " << FragTrap::_attack_line[rand() % 9] <<" attacks " << target << " for " << random_damage << " damage points!" << std::endl;
	}
	else
		std::cout << _name << " not enough energy for special attack!" << std::endl;
}

FragTrap &FragTrap::operator = (const FragTrap &copy)
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