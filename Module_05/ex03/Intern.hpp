#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

#include <iostream>

class Intern
{
	private:
		struct s_form_templates
		{
			std::string _form_kind;
			Form *(*make_form)(const std::string &name);
		}	_sform_templates[3];
	public:
		Intern();
		virtual ~Intern();
		Intern(const Intern &copy);
		Intern &operator = (const Intern &copy);

		Form *makeForm(const std::string &name, const std::string &target);

		struct form_not_exist: std::exception
		{
			const char *what() const throw();
		};
};

#endif
