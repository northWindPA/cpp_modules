#include "Pony.hpp"

Pony::Pony()
{
	std::cout << "Pony's here!" << std::endl;
}

Pony::~Pony()
{
	std::cout << this->set_name() << "-" << "Pony's disapeared!" << std::endl;
}

void	Pony::pony_attributes(std::string name, std::string gender, std::string breed, int age)
{
	this->_name = name;
	this->_gender = gender;
	this->_breed = breed;
	this->_age = age;
}

std::string Pony::set_name()
{
	return (this->_name);
}

std::string Pony::set_gender()
{
	return (this->_gender);
}

std::string Pony::set_breed()
{
	return (this->_breed);
}

int 		Pony::set_age()
{
	return (this->_age);
}

