#include "span.hpp"

span::span() : _size(0){}

span::span(int size) : _size(size){}


span::~span() {}

span::span(const span &copy)
{
	*this = copy;
}

span &span::operator = (const span &copy)
{
	if (this == &copy)
		return *this;
	_size = copy._size;
	_array = copy._array;
	return *this;
}

int &span::operator [] (const int i)
{
	return _array[i];
}

int span::shortestSpan()
{
	int min_var = INT_MAX;
	int second_min_var = INT_MAX;
	if (!_array.empty())
	{
		if (_array.size() > 1)
		{
			for (size_t i = 0; i < _array.size(); ++i)
			{
				if (_array[i] < min_var)
					min_var = _array[i];
			}
			for (size_t i = 0; i < _array.size(); ++i)
			{
				if (_array[i] == min_var)
					++i;
				if (_array[i] < second_min_var)
					second_min_var = _array[i];
			}
			return (second_min_var - min_var);
		}
		else
			return (_array[0]);
	}
	throw std::runtime_error("empty array.");
}

int span::longestSpan()
{
	int min_var = INT_MAX;
	int max_var = INT_MIN;
	if (!_array.empty())
	{
		if (_array.size() > 1)
		{
			for (size_t i = 0; i < _array.size(); ++i)
			{
				if (_array[i] < min_var)
					min_var = _array[i];
			}
			for (size_t i = 0; i < _array.size(); ++i)
			{
				if (_array[i] > max_var)
					max_var = _array[i];
			}
			return (max_var - min_var);
		}
		else
			return (_array[0]);
	}
	throw std::runtime_error("empty array.");
}

void span::addNumber(const int &n)
{
	if (_array.size() < _size)
		_array.push_back(n);
	else
		throw std::runtime_error("out of range.");
}

int span::rand_i ()
{
	return (std::rand() % 10000000);
}

void span::addNumber()
{
	for (size_t i = 0; i < _size - 2; ++i)
	{
		if (_array.size() < _size)
			_array.push_back(rand_i());
		else
			throw std::runtime_error("out of range.");
	}
}

int span::get_size() const
{
	return _array.size();
}
