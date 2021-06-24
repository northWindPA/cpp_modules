#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main ()
{
	std::cout << "<====================================================================================================================>" << std::endl;
	SuperTrap character1("SuperTrap");
	SuperTrap character2("SuperEnemy");
	std::cout << "<====================================================================================================================>" << std::endl;
	srand(time(0));
	character1.class_parameters();
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.meleeAttack(character2.get_name());
	character2.takeDamage(character1.get_melee());
	std::cout << "<====================================================================================================================>" << std::endl;
	character2.beRepaired(100);
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.meleeAttack(character2.get_name());
	character2.takeDamage(character1.get_melee());
	std::cout << "<====================================================================================================================>" << std::endl;
	character2.beRepaired(100);
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.meleeAttack(character2.get_name());
	character2.takeDamage(character1.get_melee());
	std::cout << "<====================================================================================================================>" << std::endl;
	character2.beRepaired(100);
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.rangedAttack(character2.get_name());
	character2.takeDamage(character1.get_range());
	std::cout << "<====================================================================================================================>" << std::endl;
	return (0);
}
