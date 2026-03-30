#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter Default Constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	std::cout << "ScalarConverter Copy Constructor called" << std::endl;
	*this =copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &)
{
	std::cout << "ScalarConverter Copy Assignment Operator called" << std::endl;
	return(*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter Destructor called" << std::endl;
}

static int convertInt(const char *arg)
{
	return 1;
}

void ScalarConverter::convert(const char *arg)
{
	// return (std::atoi(arg));
	// first detect the type 
	// check overflow - display error message
	// convert to the type
	// convert to three other data type
	std::cout  << "char: " << convertInt(arg) << std::endl;
}
