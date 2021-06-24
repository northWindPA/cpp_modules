#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
: Form("RobotomyRequest", 75, 42), _target(target)
{
	srand(time(0));
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
: Form(copy)
{}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &copy)
{
	Form::operator = (copy);
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	if (rand() % 2)
		throw drill_not_work();
	std::cout << _target << " has been robotomized successfully with 50\% possibility." << std::endl;
}

const char *RobotomyRequestForm::drill_not_work::what() const throw()
{
	return ("Drill doesn't execute.");
}

RobotomyRequestForm::drill_not_work::~drill_not_work() throw()
{}
