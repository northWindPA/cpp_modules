#include "ZombieHorde.hpp"
#include <unistd.h>

ZombieHorde::~ZombieHorde()
{
	delete[] this->_zombies;
	std::cout << this->_N << " zombies of horde are dead." << " Horde is no more." << std::endl;
}

void ZombieHorde::horde_announce()
{
	if (this->_N > 0)
		for (int i = 0; i < this->_N; i++)
			this->_zombies[i].zombie_announce();
}

ZombieHorde::ZombieHorde(int N)
{
	int i;

	this->_N = N;
	std::string Names[8] = {"Ash", "Billy", "Bub", "Roger", "Eddie", "Fido", "Jason", "Todd"};
	std::string type[8] = {"Smoker", "Boomer", "Hunter", "Charger", "Spitter", "Jockey", "Tank", "Witch"};
	if (N > 0)
	{
		this->_zombies = new Zombie[N];
		i = 0;
		while(i < N)
		{
			sleep(1);
			srand(time(0));
			this->_zombies[i].set_attributes(Names[rand() % 8], type[rand() % 8], rand() % 8);
			std::cout << "Zombie " << this->_zombies[i].z_name() << " is here." << std::endl;
			sleep(1);
			_zombies[i].zombie_announce();
			i++;
		}
		std::cout << this->_N << " - number of zombies in horde." << std::endl;
		sleep(1);
		std::cout << "Horde is ready." << std::endl;
		sleep(1);
	}
}
