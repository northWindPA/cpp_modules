#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include <sstream>

#include "Brain.hpp"

class Human
{
	private:
		Brain _brain;
	public:
		Human();
		~Human();
		std::string identify();
		Brain &getBrain();
};

#endif