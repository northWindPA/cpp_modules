#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim
{
	protected:
		Victim();
		std::string _name;

	public:
		Victim(std::string name);
		virtual ~Victim();
		Victim(const Victim &copy);
		Victim &operator = (const Victim &copy);

		virtual void get_polymorphed() const;
		std::string const &get_name() const;
};

std::ostream &operator << (std::ostream &out, const Victim &victim);

#endif
