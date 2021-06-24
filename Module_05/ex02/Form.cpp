#include "Form.hpp"

Form::Form()
: _signed(false), _grade_req_sign(0), _grade_req_exec(0)
{}

Form::Form(const std::string &name, const int grade_grade_req_sign, const int grade_grade_req_exec)
: _name(name),_grade_req_sign(grade_grade_req_sign), _grade_req_exec(grade_grade_req_exec)
{
	if (_grade_req_sign < 1 || _grade_req_exec < 1)
		throw Form::GradeTooHighException("Form constructor(high) called.");
	if (_grade_req_sign >= 150 || _grade_req_exec >= 150)
		throw Form::GradeTooLowException("Form constructor(low) called.");
	_signed = false;
}

Form::~Form()
{std::cout << _name << "-> destructor called." << std::endl;}

Form::Form(const Form &copy)
:_name(copy._name), _signed(false),
_grade_req_sign(copy._grade_req_sign),
_grade_req_exec(copy._grade_req_exec)
{}

Form &Form::operator = (const Form &copy)
{
	if (this == &copy)
		return *this;
	_signed = copy._signed;
	return *this;
}

void Form::execute(const Bureaucrat &executor) const
{
	std::cout << executor.getGrade() << "-> bureaucrat's grade " << _grade_req_exec << "-> required grade to execute." << std::endl;
	if (executor.getGrade() > _grade_req_exec)
	{
		throw Form::GradeTooLowException("execute.");
	}
	else
		std::cout << executor.getName() << " can't execute " << getName() << ". Bureaucrat's grade is lower than needed to execute." << std::endl;
	if (!_signed)
	{
		throw Form::FormNotSigned();
	}
}

bool Form::isSigned() const
{return _signed;}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	std::cout << bureaucrat.getGrade() << "-> bureaucrat's grade " << _grade_req_sign << "-> required grade to sign." << std::endl;
	if (bureaucrat.getGrade() >= _grade_req_sign)
	{
		if (_signed)
			std::cerr << bureaucrat.getName() << " can't sign " << _name << " is already signed." << std::endl;
		else
			std::cout << bureaucrat.getName() << " is signing " << _name << "." << std::endl;
		_signed = true;
	}
	else
		throw Form::GradeTooLowException("Bureaucrat's grade is lower than required.");
}

int Form::get_grade_req_sign() const
{return _grade_req_sign;}

int Form::get_grade_req_exec() const
{return _grade_req_exec;}

const std::string &Form::getName() const
{return _name;}

Form::GradeTooHighException::GradeTooHighException(const std::string &out_line)
:_out_line(out_line)
{}

Form::GradeTooHighException::~GradeTooHighException() throw()
{}

const char *Form::GradeTooHighException::what() const throw()
{
	std::string out_str = "Grade of the form is too high, ";
	if (!_out_line.empty())
		out_str += _out_line;
	else
		out_str += " ERROR ";
	return (out_str.c_str());
}

Form::GradeTooLowException::GradeTooLowException(const std::string &out_line)
:_out_line(out_line)
{}

Form::GradeTooLowException::~GradeTooLowException() throw()
{}

const char *Form::GradeTooLowException::what() const throw()
{
	std::string out_str = "Grade of the form is too low, ";
	if (!_out_line.empty())
		out_str += _out_line;
	else
		out_str += " ERROR ";
	return (out_str.c_str());
}

const char *Form::FormNotSigned::what() const throw()
{
	return ("Form is not signed!");
}

std::ostream &operator << (std::ostream &out_stream, const Form &form)
{
	out_stream << "Form-name-> " << form.getName() << ", Sign-grade-> " << form.get_grade_req_sign()
	<< ", grade to execute-> "<< form.get_grade_req_exec() << ", signed-> "<< form.isSigned() << ".";
	return out_stream;
}
