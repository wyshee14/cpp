# include "Serialization.hpp"

Serialization::Serialization() {}

Serialization::~Serialization() {}

// convert pointer to unsigned int uintptr_t
// reinterpret_cast can convert between pointer and other data types
uintptr_t Serialization::serialize(Data *ptr)
{
	uintptr_t address = reinterpret_cast<uintptr_t>(ptr);
	return address;
}

// convert unsigned int to pointer
Data* Serialization::deserialize(uintptr_t raw)
{
	Data* deserialize_ptr = reinterpret_cast<Data*>(raw);
	return deserialize_ptr;
}
