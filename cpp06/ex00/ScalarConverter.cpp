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

enum type {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO,
	INVALID
};

bool isChar(std::string input)
{
	if (input.size() != 1)
		return false;
	// printable char character and not a digit
	if (!isprint(input[0]) || isdigit(input[0]))
		return false;
	return true;
}

bool isInt(std::string input)
{
	for (int i = 0; i < input.size(); i++)
	{
		if (input[0] == '-')
			i++;
		if (!std::isdigit(input[i]))
			return false;
		// int num = std::atoi(arg);
		// std::cout << "num: " << num << std::endl;
	}
	// handle int min and max - convert string to number first
	// if (arg > INT_MAX || arg < INT_MIN)
	// {
	// 	std::cout << "Integer overflow" << std::endl;
	// 	return false;
	// }
	std::cout << "This is a int" << std::endl;
	return true;
}

// using IEEE 754 single-precision (4 bytes) - precision 7 significant digits
// check got '.'
// check the last character is 'f'
// check all digits
bool isFloat(std::string input)
{
	size_t found = input.find(".");
	if (found != std::string::npos)
		std::cout << ".is found at : " << found << std::endl;
	size_t precision = input.size() - found;
	if (precision > 8)
		return false;
	if (input.back() != 'f')
		return false;
	for (int i = 0; i < input.size(); i++)
	{
		if (!std::isdigit(input[i]) || input[i] == '.' || input[i] == 'f')
			return false;
	}
	std::cout << "This is a float" << std::endl;
	return true;
}

bool isDouble(std::string input)
{}

bool isPseudo(std::string input)
{
	const char *pseudo[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	for (int i = 0; i < 6; i++)
	{
		if (input == pseudo[i])
			return true;
	}
	return false;
}

type detectType(std::string input)
{
	if (input.empty())
		return INVALID;
	else if (isPseudo(input))
		return PSEUDO;
	else if (isChar(input))
		return CHAR;
	else if (isInt(input))
		return INT;
	else if (isFloat(input))
		return FLOAT;
	else if (isDouble(input))
		return DOUBLE;
	return INVALID;
}

void ScalarConverter::convert(const char *arg)
{
	std::string input(arg);
	// first detect the type - whether is int, char, float, double
	// check overflow/invalid - display error message
	type inputType = detectType(input);
	// convert to actual type
	// - use switch, if char, printchar()
	// convert to three other data type
}
