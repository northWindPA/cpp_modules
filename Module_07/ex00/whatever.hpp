#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

#define COL1 "\x1B[35m"
#define COL2 "\x1B[33m"
#define COL3 "\x1B[36m"
#define COL4 "\x1B[34m"
#define COL5 "\x1B[93m"
#define END "\033[0m"

template <typename T>
void swap(T &var_1, T &var_2)
{
	T tmp = var_1;
	var_1 = var_2;
	var_2 = tmp;
}

template <typename T>
T const &max(T const &var_1, T const &var_2)
{return (var_1 > var_2) ? var_1 : var_2;}

template <typename T>
T const &min(T const &var_1, T const &var_2)
{return (var_1 < var_2) ? var_1 : var_2;}

#endif
