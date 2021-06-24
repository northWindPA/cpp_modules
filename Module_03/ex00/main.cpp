#include "FragTrap.hpp"

int main ()
{
	std::cout << "<====================================================================================================================>" << std::endl;
	FragTrap character1("FR4G-TP");
	FragTrap character2("FR4G-T7");
	srand(time(0));
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.meleeAttack(character2.get_name());
	character2.takeDamage(character1.get_melee());
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.rangedAttack(character2.get_name());
	character2.takeDamage(character1.get_range());
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.vaulthunter_dot_exe(character2.get_name());
	character2.takeDamage(character1.get_ran_dam_tmp());
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.vaulthunter_dot_exe(character2.get_name());
	character2.takeDamage(character1.get_ran_dam_tmp());
	std::cout << "<====================================================================================================================>" << std::endl;
	character2.beRepaired(100);
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.vaulthunter_dot_exe(character2.get_name());
	character2.takeDamage(character1.get_ran_dam_tmp());
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.vaulthunter_dot_exe(character2.get_name());
	character2.takeDamage(character1.get_ran_dam_tmp());
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.vaulthunter_dot_exe(character2.get_name());
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.vaulthunter_dot_exe(character2.get_name());
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.meleeAttack(character2.get_name());
	character2.takeDamage(character1.get_melee());
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.rangedAttack(character2.get_name());
	character2.takeDamage(character1.get_range());
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.meleeAttack(character2.get_name());
	character2.takeDamage(character1.get_melee());
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.rangedAttack(character2.get_name());
	character2.takeDamage(character1.get_range());
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.meleeAttack(character2.get_name());
	character2.takeDamage(character1.get_melee());
	std::cout << "<====================================================================================================================>" << std::endl;
	character1.rangedAttack(character2.get_name());
	character2.takeDamage(character1.get_range());
	std::cout << "<====================================================================================================================>" << std::endl;
	character2.beRepaired(200);
	std::cout << "<====================================================================================================================>" << std::endl;
	return (0);
}
