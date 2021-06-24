#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void shrubbery();
void robotomy();
void pardon();

int main()
{
	shrubbery();
	// robotomy();
	// pardon();
}

void shrubbery()
{
	ShrubberyCreationForm shrub("Shrubbery-Form");
	std::cout << shrub << std::endl;
	try
	{
		Bureaucrat vogon("Vogon", 150);
		std::cout << vogon << std::endl;
		try
		{
			vogon.sign_form(shrub);
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
		std::cout << shrub << std::endl;
		try
		{
			vogon.execute_form(shrub);
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
	}
	catch (std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
	}
}

void robotomy()
{
	RobotomyRequestForm robo("Robotomy-Form");
	std::cout << robo << std::endl;
	try
	{
		Bureaucrat vogon("Vogon", 150);
		std::cout << vogon << std::endl;
		try
		{
			vogon.sign_form(robo);
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
		std::cout << robo << std::endl;
		try
		{
			vogon.execute_form(robo);
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
	}
	catch (std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
	}
}

void pardon()
{
	PresidentialPardonForm pardon("Pardon-From");
	std::cout << pardon << std::endl;
	try
	{
		Bureaucrat vogon("Vogon", 150);
		std::cout << vogon << std::endl;
		try
		{
			vogon.sign_form(pardon);
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
		std::cout << pardon << std::endl;
		try
		{
			vogon.execute_form(pardon);
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
	}
	catch (std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
	}
}
