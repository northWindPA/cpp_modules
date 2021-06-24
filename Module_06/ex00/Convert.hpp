#ifndef CONVERT_HPP
#define CONVERT_HPP

#define COL1 "\x1B[35m"
#define COL2 "\x1B[33m"
#define COL3 "\x1B[36m"
#define COL4 "\x1B[34m"
#define COL5 "\x1B[93m"
#define END "\033[0m"

#include <iostream>
#include <iomanip>

class Convert
{
	private:
		std::string m_string;
	public:
		Convert();
		Convert(const std::string &string);
		virtual ~Convert();
		Convert(const Convert &copy);
		Convert &operator = (const Convert &copy);

		void convert_to_char() const;
		void convert_to_int() const;
		void convert_to_float() const;
		void convert_to_double() const;

};

#endif
