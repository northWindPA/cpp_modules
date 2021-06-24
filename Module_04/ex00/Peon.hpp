#ifndef PEON_H
#define PEON_H

#include "Victim.hpp"

#include <iostream>

class Peon: public Victim
{
	private:
		Peon();

	public:
		Peon(std::string name);
		virtual ~Peon();
		Peon(const Peon &copy);
		Peon &operator = (const Peon &copy);

		void get_polymorphed() const;
};


#endif
