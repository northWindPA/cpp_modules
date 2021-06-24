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

	std::cout << COL1 << "🔷CHAR:🔷 " << END;
	if (m_string == "nan" || m_string == "inf" || m_string == "-inf")
		std::cout << COL1 << std::setw(21) << "👽 impossible 💀" << END << std::endl;
	else
	{
		try
		{
			char_var = std::stoi(m_string);
			if (std::isprint(static_cast<char>(char_var)))
				std::cout << COL1 << std::setw(12) << "🔡 " << "'" << static_cast<char>(char_var) << "'" << "🔠" << END << std::endl;
			else
				std::cout << COL1 << std::setw(25) << "👻 Non displayable 🎃" << END << std::endl;
		}
		catch (std::exception &exception)
		{
			std::cout << COL1 << std::setw(23) << "👽 impossible 💀" << END << std::endl;
		}
	}
}

void Convert::convert_to_int() const
{
	int int_var;

	std::cout << COL2 << "🔶INT:🔶 " << END;
	if (m_string == "nan" || m_string == "inf" || m_string == "-inf")
	{
		std::cout << COL2 << std::setw(22) << "👽 impossible 💀" << END << std::endl;
	}
	else
	{
		try
		{
			int_var = std::stoi(m_string);
			std::cout << COL2 << std::setw(13) << "🔢 " << int_var << " *️⃣" << END << std::endl;
		}
		catch (std::exception &exception)
		{
			std::cout << COL2 << std::setw(24) << "👽 impossible 💀" << END << std::endl;
		}
	}
}

void Convert::convert_to_float() const
{
	float float_var;

	std::cout << COL3 << "🔵FLOAT:🔵 " << END;
	if ((m_string == "nan" || m_string == "inf") && m_string.length() == 3)
	{
		std::cout << COL3 << std::setw(12) << "👾" << std::stof(m_string) << "f" << "🤖" << END << std::endl;
	}
	else if (m_string == "-inf" && m_string.length() == 4)
		std::cout << COL3 << std::setw(11) << "👾" << std::stof(m_string) << "f" << "🤖" << END << std::endl;
	else
	{
		try
		{
			float_var = std::stof(m_string);
			std::cout << COL3 << std::setw(11) << "🔢 " <<  std::fixed << std::setprecision(1) << float_var << "f" << " ⏺" << END << std::endl;
		}
		catch (std::exception &exception)
		{
			std::cout << COL3 << std::setw(22) << "👽 impossible 💀" << END << std::endl;
		}
	}
}

void Convert::convert_to_double() const
{
	double double_var;

	std::cout << COL4 << "🔴DOUBLE:🔴 " << END;
	if (m_string == "nan" || m_string == "inf")
	{
		std::cout << COL4 << std::setw(12) << "👾" << std::stod(m_string) << "🤖" << END << std::endl;
	}
	else if (m_string == "-inf")
		std::cout << COL4 << std::setw(11) << "👾" << std::stod(m_string) << "🤖" << END << std::endl;
	else
	{
		try
		{
			double_var = std::stod(m_string);
			std::cout << COL4 << std::setw(10) << "🔢 " << std::fixed << std::setprecision(1) << double_var << std::showpoint << " ⏹" << END << std::endl;
		}
		catch (std::exception &exception)
		{
			std::cout << COL4 << std::setw(21) << "👽 impossible 💀" << END << std::endl;
		}
	}
}
