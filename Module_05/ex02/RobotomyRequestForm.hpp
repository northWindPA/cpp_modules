#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &target);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm &operator = (const RobotomyRequestForm &copy);

		void execute(const Bureaucrat &executor) const;

		class drill_not_work : public std::exception
		{
			public:
				~drill_not_work() throw();

				const char *what() const throw();
		};
};

#endif
