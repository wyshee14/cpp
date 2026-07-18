#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data {
	private:
		std::string _name;
		int _age;
		// void* _ptr;

	public:
		Data();
		Data(const Data *copy);
		Data &operator=(const Data &other);
		~Data();
		int getAge() const;
		const std::string &getName() const;
};

#endif
