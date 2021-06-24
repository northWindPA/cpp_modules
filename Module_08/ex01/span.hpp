#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <limits>

#define COL1 "\x1B[35m"
#define COL2 "\x1B[33m"
#define COL3 "\x1B[36m"
#define COL4 "\x1B[34m"
#define COL5 "\x1B[93m"
#define END "\033[0m"

class span
{
	private:
		size_t _size;
		std::vector<int> _array;

	public:
		span();
		span(int size);
		virtual ~span();
		span(const span &copy);
		span &operator = (const span &copy);
		int &operator [] (const int i);

		int shortestSpan();
		int longestSpan();
		void addNumber(const int &n);
		int rand_i ();
		void addNumber();
		int get_size() const;
};

#endif
