#include "Human.hpp"

Human::Human()
{
	std::cout << "Human is here. Human has a brain! Wow..." << std::endl;
}

Human::~Human()
{
	std::cout << "Human is no more." << std::endl;
}

std::string Human::identify()
{
	return (getBrain().identify());
}

Brain &Human::getBrain()
{
	return (this->_brain);
}

