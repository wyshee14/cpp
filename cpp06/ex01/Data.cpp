# include "Data.hpp"

Data::Data() : _name("CPP"), _age(42)
{
	std::cout << "Data default constructor is called" << std::endl;
}

Data::Data(const Data *copy)
{
	std::cout << "Data copy destructor is called" << std::endl;
	*this = copy;
}

Data &Data::operator=(const Data &other)
{
	std::cout << "Data operator assignment is called" << std::endl;
	if (this != &other)
	{
		this->_name = other.getName();
		this->_age = other.getAge();
	}
	return (*this);
}

Data::~Data()
{
	std::cout << "Data default destructor is called" << std::endl;
}

int Data::getAge() const
{
	return _age;
}

const std::string &Data::getName() const
{
	return _name;
}
