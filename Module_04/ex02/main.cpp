#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "PrimarisAstartes.hpp"

void cp_testing()
{
	Squad vlc1;
	ISpaceMarine* mar1 = new AssaultTerminator();
	ISpaceMarine* mar2 = new TacticalMarine();
	vlc1.push(mar1);
	vlc1.push(mar2);

	Squad vlc3;
	vlc3= vlc1;

	ISpaceMarine* mar3 = new AssaultTerminator();
	ISpaceMarine* mar4 = new TacticalMarine();
	vlc3.push(mar3);
	vlc3.push(mar4);

	std::cout << "Count of squad = " << vlc1.get_count() << std::endl;
	std::cout << "<=====================================================>" << std::endl;
	for (int i = 0; i < vlc3.get_count(); ++i)
	{
		ISpaceMarine* cur = vlc3.get_unit(i);
		cur->battle_cry();
		cur->ranged_attack();
		cur->melee_attack();
	}
	std::cout << "<=====================================================>" << std::endl;
}

void subj_testing()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->get_count(); ++i)
	{
		ISpaceMarine* cur = vlc->get_unit(i);
		cur->battle_cry();
		cur->ranged_attack();
		cur->melee_attack();
	}
	delete vlc;
}

void broken_testing()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* jerry = new PrimarisAstartes;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(jerry);
	std::cout << "Count of squad = " << vlc->get_count() << std::endl;


	std::cout << "<=====================================================>" << std::endl;
	for (int i = 0; i < vlc->get_count(); ++i)
	{
		ISpaceMarine* cur = vlc->get_unit(i);
		cur->battle_cry();
		cur->ranged_attack();
		cur->melee_attack();
	}
	std::cout << "<=====================================================>" << std::endl;


	ISquad *vlc2;
	vlc2 = vlc;
	ISpaceMarine* mar1 = new AssaultTerminator();
	ISpaceMarine* mar2 = new TacticalMarine();
	vlc2->push(mar1);
	vlc2->push(mar2);

	std::cout << "Count of squad = " << vlc2->get_count() << std::endl;

	std::cout << "<=====================================================>" << std::endl;
	for (int i = 0; i < vlc2->get_count(); ++i)
	{
		ISpaceMarine* cur = vlc2->get_unit(i);
		cur->battle_cry();
		cur->ranged_attack();
		cur->melee_attack();
	}
	std::cout << "<=====================================================>" << std::endl;

	// delete vlc;
	delete vlc2;
}

int main()
{
	// cp_testing();
	// subj_testing();
	broken_testing();

}
