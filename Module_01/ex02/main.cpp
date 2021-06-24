#include <unistd.h>
#include <ctime>
#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent ze;
	int i;
	int level;

	std::string type[8] = 
	{"Smoker", "Boomer", "Hunter", "Charger", "Spitter", "Jockey", "Tank", "Witch"};
	i = 0;
	std::cout << "==============================================================" << std::endl;
	while(i < 8)
	{
		srand(time(0));
		ze.setZombieType(type[rand() % 8]);
		ze.setZombieLevel(level = rand() % 8);
		ze.randomChump();
		std::cout << "==============================================================" << std::endl;
		sleep(1);
		i++;
	}
	return 0;
}
