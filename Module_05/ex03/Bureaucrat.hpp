#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat;
#include "Form.hpp"

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		virtual ~Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator = (const Bureaucrat &copy);

		void increment_grade();
		void decrement_grade();
		const std::string &getName() const;
		int getGrade() const;
		void sign_form(Form& form);
		void execute_form(Form const & form);

		class GradeTooHighException : public std::exception
		{
			private:
				std::string _out_line;
			public:

				GradeTooHighException(const std::string &out_line);
				~GradeTooHighException() throw();

				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			private:
				std::string _out_line;
			public:
				GradeTooLowException(const std::string &out_line);
				~GradeTooLowException() throw();

				const char *what() const throw();
		};
};

std::ostream &operator << (std::ostream &os, const Bureaucrat &bureaucrat);

#endif
