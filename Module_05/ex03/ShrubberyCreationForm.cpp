#include "ShrubberyCreationForm.hpp"

#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: Form("ShrubberyCreation", 145, 137), _target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
:Form(copy)
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &copy)
{
	Form::operator = (copy);
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > 137)
	{
		std::ofstream file(_target + "_shrubbery");
		if (!file.is_open())
			throw std::runtime_error("file not opened!");
		file << 	"\n"
					"       _-_          \n"
					"    /~~   ~~\\      \n"
					" /~~         ~~\\   \n"
					"{               }   \n"
					" \\  _-     -_  /   \n"
					"   ~  \\\\ //  ~    \n"
					"_- -   | | _- _     \n"
					"  _ -  | |   -_     \n"
					"      // \\\\       \n"
					"--------------------\n" << std::endl;
		file.close();
	}
	Form::execute(executor);
}
