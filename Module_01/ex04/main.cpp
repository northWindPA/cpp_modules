#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *brain_point = &brain;
	std::cout << "pointer: " << *brain_point << std::endl;
	std::string &brain_ref = brain;
	std::cout << "reference: " << brain_ref << std::endl;
}