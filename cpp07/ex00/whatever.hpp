#ifndef WHATEVER_HPP
#define WHATEVER_HPP

// template is a generic function that allow multiple data types to work
template <typename T>
T max(T x, T y)
{
	// ternary operator, if true return x, false return y
	return (x > y) ? x : y;
}

template <typename T>
T min(T x, T y)
{
	return (x < y) ? x : y;
}

template <typename T>
void swap(T &x, T &y)
{
	T temp = x;
	x = y;
	y = temp;
}

#endif
