#include "easyfind.hpp"

#include <set>

#include <iostream>

int main()
{
	std::set<int> set;
	for (int i = 0; i < 21; ++i)
	{
		set.insert(i);
	}
	std::set<int>::iterator i = set.begin();
	try
	{
		i = easyfind(set, 25);
		std::cout << "|" << *i << "| ◀️- has been found." << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cout << exception.what() << std::endl;
	}
	try
	{
		i = easyfind(set, 15);
		std::cout << "\"" << *i << "\" ◀️- has been found." << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cout << exception.what() << std::endl;
	}
	std::cout << "| ";
	for (std::set<int>::iterator loop_i = set.begin(); loop_i != set.end(); ++loop_i)
	{
		std::cout << *loop_i << " | ";
	}
	std::cout << std::endl;
}


