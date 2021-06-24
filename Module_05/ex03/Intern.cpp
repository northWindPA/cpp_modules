#include "Intern.hpp"

Form *new_shrubbery_form(const std::string &target);
Form *new_presidential_form(const std::string &target);
Form *new_robotomy_form(const std::string &target);

Intern::Intern()
{}

Intern::~Intern()
{}

Intern::Intern(const Intern &copy)
{
	(void)copy;
}

Intern &Intern::operator = (const Intern &copy)
{
	(void)copy;
	return *this;
}

Form *Intern::makeForm(const std::string &name, const std::string &target)
{
	int i = 0;

	_sform_templates[0]._form_kind = "Shrubbery creation";
	_sform_templates[0].make_form = &new_shrubbery_form;
	_sform_templates[1]._form_kind = "Presidential pardon";
	_sform_templates[1].make_form = &new_presidential_form;
	_sform_templates[2]._form_kind = "Robotomy request";
	_sform_templates[2].make_form = &new_robotomy_form;

	while (i <= 2)
	{
		if (name == _sform_templates[i]._form_kind)
		{
			std::cout << "Intern makes " << target << " form." << std::endl;
			Form *form = _sform_templates[i].make_form(target);
			return form;
		}
		i++;
	}
	throw form_not_exist();
}

Form *new_shrubbery_form(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

Form *new_presidential_form(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

Form *new_robotomy_form(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

const char *Intern::form_not_exist::what() const throw()
{
	return ("Form doesn't exist.");
}
