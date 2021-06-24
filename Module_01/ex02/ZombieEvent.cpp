#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->_type, this->_level));
}

void ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

void ZombieEvent::setZombieLevel(int level)
{
	this->_level = level;
}

void ZombieEvent::randomChump()
{

	std::string Names[8] = {"Ash", "Billy", "Bub", "Roger", "Eddie", "Fido", "Jason", "Todd"};
	Zombie *zombie = newZombie(Names[rand() % 8]);
	zombie->announce();
	delete(zombie);
}
