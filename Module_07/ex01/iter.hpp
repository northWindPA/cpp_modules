#ifndef ITER_HPP
#define ITER_HPP

#define COL1 "\x1B[35m"
#define COL2 "\x1B[33m"
#define COL3 "\x1B[36m"
#define COL4 "\x1B[34m"
#define COL5 "\x1B[93m"
#define END "\033[0m"

#include <iostream>

template <typename T>
void iter(T *array, size_t length, void (*func)(T))
{
	size_t i = 0;
	while (i < length)
	{
		func(array[i]);
		i++;
	}
}

template <typename T>
void iter(T *array, size_t length, void (*func)(T &))
{
	size_t i = 0;
	while (i < length)
	{
		func(array[i]);
		i++;
	}
}

template <typename T>
void iter(T *array, size_t length, void (*func)(T const &))
{
	size_t i = 0;
	while (i < length)
	{
		func(array[i]);
		i++;
	}
}

#endif
