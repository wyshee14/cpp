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

// static int convertToInt(const char *arg)
// {
// 	// return (std::atoi(arg));
// 	return 1;
// }

enum type {
	INT,
	CHAR,
	FLOAT,
	DOUBLE,
};

bool isInt(const char *arg)
{
	// handle int min and max
	if (arg > INT_MAX || arg < INT_MIN)
	{
		std::cout << "Integer overflow" << std::endl;
		return false;
	}
	for (size_t i = 0; i < strlen(arg); i++)
	{
		if (arg[0] == '-')
			i++;
		if (!std::isdigit(arg[i]))
			return false;
		int num = std::atoi(arg);
		std::cout << "num: " << num << std::endl;
	}
	std::cout << "This is a int" << std::endl;
	return true;
}

bool isChar(const char *arg)
{
	for (size_t i = 0; i < strlen(arg); i++)
	{
		// printable har character
		if (arg[i] < 32 || arg[i] >= 127)
			return false;
	}
	std::cout << "This is a char" << std::endl;
	return true;
}

// using IEEE 754 single-precision (4 bytes) - precision 7 significant digits
bool isFloat(const char *arg)
{
	std::string str = arg;
	std::size_t found = str.find(".");
	if (found != std::string::npos)
		std::cout << ".is found at : " << found << std::endl;
	if (str.size() > 8)
		return false;
	if (arg[str.size() - 1] != 'f')
		return false;
	std::cout << "This is a float" << std::endl;
	return true;
}

void ScalarConverter::convert(const char *arg)
{
	int type;
	// first detect the type - whether is int, char, float, double
	if (isInt(arg))
		type = 0;
	// check overflow - display error message
	// convert to the type
	// convert to three other data type
	// std::cout  << "char: " << convertToInt(arg) << std::endl;
}
