#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern intern;
	Form *form;
	std::string targets[3] = {"Shrubbery", "Putin", "Belizarius"};
	std::string types[3] = {"Shrubbery creation", "Presidential pardon", "Robotomy request"};

	try
	{
		Bureaucrat vogon("Vogon", 150);
		std::cout << vogon << std::endl;
		for (int i = 0; i <= 2; i++)
		{
			try
			{
				form = intern.makeForm(types[i], targets[i]);
				std::cout << *form;
				std::cout << "" << std::endl;
				try
				{
					vogon.sign_form(*form);
				}
				catch (std::exception &exception)
				{
					std::cerr << exception.what() << std::endl;
				}
				try
				{
					vogon.execute_form(*form);
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
	}
	catch (std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
	}

}
