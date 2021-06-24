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
		Zombie();
		Zombie(std::string name, std::string type, int level);
		~Zombie();
		void zombie_announce();
		std::string z_name();
		void set_attributes(std::string name, std::string type, int level);
};

#endif
