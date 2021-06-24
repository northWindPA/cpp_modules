#include "Bureaucrat.hpp"

int main()
{
	std::cout << "<===================================================================>" << std::endl;
	Bureaucrat Vogon("Prostetnic Vogon Jeltz", 42);
	std::cout << Vogon << std::endl;
	Vogon.decrement_grade();
	std::cout << Vogon << std::endl;
	Vogon.decrement_grade();
	std::cout << Vogon << std::endl;
	Vogon.increment_grade();
	std::cout << Vogon << std::endl;
	Vogon.increment_grade();
	std::cout << Vogon << std::endl;
	std::cout << "<===================================================================>" << std::endl;

	Bureaucrat *bureaucrat = new Bureaucrat("mhumfrey", 42);
	delete bureaucrat;
	std::cout << "<===================================================================>" << std::endl;

	try
	{
		Bureaucrat Vogon2("Kwaltz", 151);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<===================================================================>" << std::endl;
	try
	{
		Bureaucrat *Vogon3 = new Bureaucrat("Kwaltz", -1);
		std::cout << *Vogon3 << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "<===================================================================>" << std::endl;
	return (0);
}