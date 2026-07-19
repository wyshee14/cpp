#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void add(T &x)
{
	x++;
}

template <typename T>
void print(const T &x)
{
	std::cout << x << std::endl;;
}


// Parameters
// 1. address of an array
// 2. length of array (int const)
// 3. template function called on every element of array (take const/non-const parameters)
template <typename T1, typename T2, typename T3>
void iter(T1 x, T2 y, T3 z)
{
	for (int i = 0; i < y; i++)
	{
		z(x[i]);
	}
}

#endif
