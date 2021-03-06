#include "Convert.hpp"

Convert::Convert()
{}

Convert::Convert(const std::string &string)
: m_string(string)
{}

Convert::~Convert()
{}

Convert::Convert(const Convert &copy)
{
	*this = copy;
}

Convert &Convert::operator = (const Convert &copy)
{
	if (this == &copy)
		return *this;
	return *this;
}

void Convert::convert_to_char() const
{
	int char_var;

	std::cout << COL1 << "π·CHAR:π· " << END;
	if (m_string == "nan" || m_string == "inf" || m_string == "-inf")
		std::cout << COL1 << std::setw(21) << "π½ impossible π" << END << std::endl;
	else
	{
		try
		{
			char_var = std::stoi(m_string);
			if (std::isprint(static_cast<char>(char_var)))
				std::cout << COL1 << std::setw(12) << "π‘ " << "'" << static_cast<char>(char_var) << "'" << "π " << END << std::endl;
			else
				std::cout << COL1 << std::setw(25) << "π» Non displayable π" << END << std::endl;
		}
		catch (std::exception &exception)
		{
			std::cout << COL1 << std::setw(23) << "π½ impossible π" << END << std::endl;
		}
	}
}

void Convert::convert_to_int() const
{
	int int_var;

	std::cout << COL2 << "πΆINT:πΆ " << END;
	if (m_string == "nan" || m_string == "inf" || m_string == "-inf")
	{
		std::cout << COL2 << std::setw(22) << "π½ impossible π" << END << std::endl;
	}
	else
	{
		try
		{
			int_var = std::stoi(m_string);
			std::cout << COL2 << std::setw(13) << "π’ " << int_var << " *οΈβ£" << END << std::endl;
		}
		catch (std::exception &exception)
		{
			std::cout << COL2 << std::setw(24) << "π½ impossible π" << END << std::endl;
		}
	}
}

void Convert::convert_to_float() const
{
	float float_var;

	std::cout << COL3 << "π΅FLOAT:π΅ " << END;
	if ((m_string == "nan" || m_string == "inf") && m_string.length() == 3)
	{
		std::cout << COL3 << std::setw(12) << "πΎ" << std::stof(m_string) << "f" << "π€" << END << std::endl;
	}
	else if (m_string == "-inf" && m_string.length() == 4)
		std::cout << COL3 << std::setw(11) << "πΎ" << std::stof(m_string) << "f" << "π€" << END << std::endl;
	else
	{
		try
		{
			float_var = std::stof(m_string);
			std::cout << COL3 << std::setw(11) << "π’ " <<  std::fixed << std::setprecision(1) << float_var << "f" << " βΊ" << END << std::endl;
		}
		catch (std::exception &exception)
		{
			std::cout << COL3 << std::setw(22) << "π½ impossible π" << END << std::endl;
		}
	}
}

void Convert::convert_to_double() const
{
	double double_var;

	std::cout << COL4 << "π΄DOUBLE:π΄ " << END;
	if (m_string == "nan" || m_string == "inf")
	{
		std::cout << COL4 << std::setw(12) << "πΎ" << std::stod(m_string) << "π€" << END << std::endl;
	}
	else if (m_string == "-inf")
		std::cout << COL4 << std::setw(11) << "πΎ" << std::stod(m_string) << "π€" << END << std::endl;
	else
	{
		try
		{
			double_var = std::stod(m_string);
			std::cout << COL4 << std::setw(10) << "π’ " << std::fixed << std::setprecision(1) << double_var << std::showpoint << " βΉ" << END << std::endl;
		}
		catch (std::exception &exception)
		{
			std::cout << COL4 << std::setw(21) << "π½ impossible π" << END << std::endl;
		}
	}
}
