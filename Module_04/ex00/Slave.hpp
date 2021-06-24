#ifndef SLAVE_H
#define SLAVE_H

#include "Victim.hpp"

#include <iostream>

class Slave: public Victim
{
	private:
		Slave();

	public:
		Slave(std::string name);
		virtual ~Slave();
		Slave(const Slave &copy);
		Slave &operator = (const Slave &copy);

		void get_polymorphed() const;
};


#endif
