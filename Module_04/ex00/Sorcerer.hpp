#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Victim.hpp"

#include <iostream>

class Sorcerer
{
	private:
		Sorcerer();
		std::string _name;
		std::string _title;

	public:
		Sorcerer(std::string name, std::string title);
		virtual ~Sorcerer();
		Sorcerer(const Sorcerer &copy);
		Sorcerer &operator = (const Sorcerer &copy);

		void polymorph(Victim const &victim) const;
		std::string const &get_name() const;
		std::string const &get_title() const;
};

std::ostream &operator << (std::ostream &out, const Sorcerer &sorcerer);

#endif
