#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template<typename T>
typename T::iterator easyfind(T & staff, int var_find)
{
	typename T::iterator i;
	if ( (i = std::find(staff.begin(), staff.end(), var_find)) == staff.end())
	{
		std::string out_line = "\"" + std::to_string(var_find) + "\" ◀️- hasn't been found";
		throw std::runtime_error(out_line);
	}
	return (i);
}

#endif