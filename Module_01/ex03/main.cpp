#include <unistd.h>
#include <ctime>
#include "ZombieHorde.hpp"

int main()
{
	ZombieHorde *one_horde = new ZombieHorde(3);
	sleep(1);
	ZombieHorde *two_horde = new ZombieHorde(4);
	sleep(1);
	std::cout << "HANS... GET ZE FLAMMENWERFER!" << std::endl;
	sleep(3);
	std::cout << "SOUNDS OF BURNING ZOMBIES!" << std::endl;
	sleep(3);
	delete (one_horde);
	sleep(1);
	delete (two_horde);
	std::cout << "Yeah Hans, peace and quiet." << std::endl;
	return 0;
}
