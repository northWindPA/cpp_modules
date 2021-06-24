#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int 				_value_store;
		static const int	_fractional_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed &operator = (const Fixed& copy);
		int getRawBits()const;
		void setRawBits(const int raw);
};


#endif
