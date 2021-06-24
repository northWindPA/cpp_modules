#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout  << "<" << this->_name << "(" << this->_type << ")" << "-" << "level:" << this->_level << ">" << " Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(std::string name, std::string type, int level)
{
	this->_name = name;
	this->_type = type;
	this->_level = level;
	std::cout << "Zombie " << _name << " is here." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << " is dead." << std::endl;
}

