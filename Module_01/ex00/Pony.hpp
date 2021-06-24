#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
# include <string>
# include <iomanip>

class Pony
{
	private:
		std::string _name;
		std::string _gender;
		std::string _breed;
		int			_age;

	public:
		Pony();
		~Pony();
		void			pony_attributes(std::string name, std::string gender, std::string breed, int age);
		std::string		set_name();
		std::string		set_gender();
		std::string		set_breed();
		int				set_age();
};

#endif
