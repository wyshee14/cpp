# include "Data.hpp"
# include "Serialization.hpp"
# include <stdint.h>
# include <iostream>

int main()
{
	Data obj;
	uintptr_t address = Serialization::serialize(&obj);
	std::cout << "Ptr Address: " << address << std::endl;
	Data* restored = Serialization::deserialize(address);
	std::cout << "Same object? " << (restored == &obj) << std::endl;
	std::cout << "Name: " << obj.getName() << " = " << restored->getName() << std::endl;
	std::cout << "Age: " << obj.getAge() << " = " << restored->getAge() << std::endl;

	// int data = 42;
	// int *ptr = &data;
	// reinterpret_cast can convert between pointer and integer types
	// std::uintptr_t address = reinterpret_cast<std::uintptr_t>(ptr);
	// std::cout << "Address: " << address << std::endl;
	// int* deserialize_ptr = reinterpret_cast<int*>(address);
	// std::cout << "Original value: " << *deserialize_ptr << std::endl;

	return 0;
}
