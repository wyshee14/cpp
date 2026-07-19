# include "iter.hpp"
# include <iostream>

int main()
{
	// non-const value
	int arr[4] = {1, 2, 3, 4};
	const int size1 = sizeof(arr)/sizeof(int);
	std::cout << "size1: " << size1 << std::endl;
	::iter(arr, size1, ::print<int>);
	std::cout << "---ADDITION---" << std::endl;
	::iter(arr, size1, ::add<int>);
	::iter(arr, size1, ::print<int>);

	// const value
	const std::string arr2[3] = {"apple", "banana", "carrot"};
	const int size2 = sizeof(arr2) / sizeof(arr2[0]);
	std::cout << "size2: " << size2 << std::endl;
	::iter(arr2, size2, ::print<std::string>);
}
