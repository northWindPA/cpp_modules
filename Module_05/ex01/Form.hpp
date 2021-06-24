#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form;
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string _name;
		bool			_signed;
		const int		_grade_req_sign;
		const int	 	_grade_req_exec;
	public:
		Form();
		Form(const std::string &name, const int gradeRequiredToSign, const int gradeRequiredToExecute);
		virtual ~Form();
		Form(const Form &copy);
		Form &operator=(const Form &copy);

		bool isSigned() const;
		void beSigned(const Bureaucrat &bureaucrat);
		int get_grade_req_sign() const;
		int get_grade_req_exec() const;
		const std::string &getName() const;

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
				const char *what() const throw() ;
		};
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif
