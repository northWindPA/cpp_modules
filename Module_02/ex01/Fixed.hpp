#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed
{
	private:
		int 				_value_store;
		static const int	_fractional_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int d_value);
		Fixed(const float f_value);
		~Fixed();
		Fixed &operator = (const Fixed& copy);
		int getRawBits()const;
		void setRawBits(const int raw);
		float toFloat() const;
		int toInt() const;
};

std::ostream &operator << (std::ostream &out, Fixed const &_value_store);

#endif
