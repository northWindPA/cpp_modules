#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_value_store = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int d_value)
{
	std::cout << "Int constructor called" << std::endl;
	_value_store = d_value << _fractional_bits;
}

Fixed::Fixed(const float f_value)
{
	std::cout << "Float constructor called" << std::endl;
	_value_store = roundf(f_value * (1 << _fractional_bits));
}

int Fixed::toInt() const
{
	return (_value_store >> _fractional_bits);
}

float Fixed::toFloat() const
{
	return (static_cast<float>(_value_store) / static_cast<float>(1 << _fractional_bits));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	_value_store = copy.getRawBits();
}

Fixed &Fixed::operator = (const Fixed &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	_value_store = copy.getRawBits();
	return *this;
}

std::ostream &operator << (std::ostream &out, Fixed const &_value_store)
{
	return(out << _value_store.toFloat());
}

int Fixed::getRawBits()const
{
	return (_value_store);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value_store = raw;
}