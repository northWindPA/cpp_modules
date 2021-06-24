#include "Bureaucrat.hpp"

// Bureaucrat class

Bureaucrat::Bureaucrat(const std::string &name, int grade)
: _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException(_name + " bureaucrat constructor(high) called.");
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException(_name + " bureaucrat constructor(low) called.");
	_grade = grade;
}

Bureaucrat::~Bureaucrat()
{std::cout << _name << " bureaucrat's destructor called." << std::endl;}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{*this = copy;}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &copy)
{
	if (this == &copy)
		return *this;
	_grade = copy._grade;
	return (*this);
}

void Bureaucrat::increment_grade()
{
	if (_grade - 1 > 0)
		_grade--;
	else
		throw Bureaucrat::GradeTooHighException(_name + " increment grade.");
}

void Bureaucrat::decrement_grade()
{
	if (_grade + 1 <= 150)
		_grade++;
	else
		throw Bureaucrat::GradeTooLowException(_name + " decrement grade.");
}

const std::string &Bureaucrat::getName() const
{return _name;}

int Bureaucrat::getGrade() const
{return _grade;}

void Bureaucrat::sign_form(Form &form)
{
	form.beSigned(*this);
}

void Bureaucrat::execute_form(const Form &form)
{
		// std::cout << _name << " execute " << form.getName() << std::endl;
		form.execute(*this);
}

// GradeTooHighException class

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string &out_line)
: _out_line(out_line)
{}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	std::string out_str = "Grade is too high, ";
	if (!_out_line.empty())
		out_str += _out_line;
	else
		out_str += " ERROR ";
	return (out_str.c_str());
}

// GradeTooLowException class

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string &out_line)
: _out_line(out_line)
{}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	std::string out_str = "Grade is too low, ";
	if (!_out_line.empty())
		out_str += _out_line;
	else
		out_str += " ERROR ";
	return (out_str.c_str());
}

// Outstream assignation

std::ostream &operator << (std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << "Name-" << bureaucrat.getName() << ", Grade-" << bureaucrat.getGrade();
	return os;
}
