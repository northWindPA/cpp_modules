#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;
		std::string _type;
		int			_level;

	public:
		Zombie(std::string name, std::string type, int level);
		~Zombie();
		void announce();
};

#endif
