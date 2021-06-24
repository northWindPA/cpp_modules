#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main ()
{
	std::cout << "<====================================================================================================================>" << std::endl;
	FragTrap club("club");
	FragTrap knife("knife");
	FragTrap sword("sword");
	FragTrap gun("gun");
	NinjaTrap character1("Ninja");
	ClapTrap character2("Enemy");
	srand(time(0));
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.ninjaShoebox(club);
	character1.meleeAttack(character2.get_name());
	character2.takeDamage(character1.get_melee());
	std::cout << "<====================================================================================================================>" << std::endl;
	character2.beRepaired(100);
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.ninjaShoebox(knife);
	character1.meleeAttack(character2.get_name());
	character2.takeDamage(character1.get_melee());
	std::cout << "<====================================================================================================================>" << std::endl;
	character2.beRepaired(100);
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.ninjaShoebox(sword);
	character1.meleeAttack(character2.get_name());
	character2.takeDamage(character1.get_melee());
	std::cout << "<====================================================================================================================>" << std::endl;
	character2.beRepaired(100);
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.ninjaShoebox(gun);
	character1.rangedAttack(character2.get_name());
	character2.takeDamage(character1.get_range());
	std::cout << "<====================================================================================================================>" << std::endl;
	return (0);
}
