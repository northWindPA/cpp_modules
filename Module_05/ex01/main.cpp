#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "<===================================================================>" << std::endl;
	Bureaucrat vogon("Vogon", 100);
	std::cout << vogon << std::endl;
	try
	{
		Form form1("Form_1", 99, 100);
		std::cout << form1 << std::endl;
		vogon.sign_form(form1);
	}
	catch (std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	std::cout << "<===================================================================>" << std::endl;
	try
	{
		Form form2("Form_2", 100, 99);
		std::cout << form2 << std::endl;
		vogon.sign_form(form2);
		std::cout << form2 << std::endl;
		vogon.sign_form(form2);
	}
	catch (std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	std::cout << "<===================================================================>" << std::endl;
	try
	{
		Form form3("Form_3", 144, 100);
		std::cout << form3 << std::endl;
		vogon.sign_form(form3);
		std::cout << form3 << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	std::cout << "<===================================================================>" << std::endl;
	return 0;
}
