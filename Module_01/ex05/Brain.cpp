#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is here." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain is no more." << std::endl;
}

std::string Brain::identify()
{
	std::stringstream address;
	address << this;
	return (address.str());
}