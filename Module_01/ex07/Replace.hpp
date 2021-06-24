#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class Replace
{
	private:
		std::ifstream 	_old_file;
		std::ofstream	_changed_file;
	public:
		Replace();
		~Replace();
		int validator(const std::string &file_name, const std::string &s1, const std::string &s2);
};


#endif