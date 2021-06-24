#ifndef ARRAY_HPP
#define ARRAY_HPP

#define COL1 "\x1B[35m"
#define COL2 "\x1B[33m"
#define COL3 "\x1B[36m"
#define COL4 "\x1B[34m"
#define COL5 "\x1B[93m"
#define END "\033[0m"

#include <iostream>

template <typename T>
class Array
{
	private:
		size_t _size;
		T *_array;
	public:
		Array<T>()
		: _size(0), _array(new T[0])
		{}

		Array<T>(unsigned int n)
		: _size(n), _array(new T[n])
		{
			unsigned int i = 0;
			while (i < n)
			{
				_array[i] = 0;
				i++;
			}
		}

		~Array<T>()
		{
			delete _array;
		};

		Array<T>(Array<T> const &copy)
		{
			*this = copy;
		}

		Array<T> &operator = (Array<T> const &copy)
		{
			if (this != &copy)
			{
				delete _array;
				_array = new T[copy.get_size()];
				_size = copy.get_size();
				size_t i = 0;
				while (i < _size)
				{
					_array[i] = copy._array[i];
					i++;
				}
			}
			return (*this);
		}

		T &operator [] (size_t i) const
		{
			if (i >= 0 && i < _size)
				return (_array[i]);
			std::string out_line = "index " + std::to_string(i) + " is out of range";
			throw std::out_of_range(out_line);
		}

		size_t get_size() const
		{
			return (_size);
		}
};

template <typename T>
std::ostream &operator << (std::ostream &out_stream, Array<T> const &array)
{
	out_stream << "[ ";
	size_t i = 0;
	while (i < array.get_size())
	{
		out_stream << array[i] << " ";
		i++;
	}
	out_stream << "]" << std::endl;
	return (out_stream);
}

#endif
