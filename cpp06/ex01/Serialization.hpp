#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <stdint.h>
#include "Data.hpp"

class Serialization {
	private:
		Serialization();
		~Serialization();

	public:
		// static method - without creating object
		// uintptr_t - unsigned integer type holding a pointer to void
		// use for address manipulation
		// convert pointer to unsigned int uintptr_t
		static uintptr_t serialize(Data *ptr);
		// convert unsigned int to pointer
		static Data* deserialize(uintptr_t raw);
};

#endif
