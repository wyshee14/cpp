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
	std::cout << "This is a char" << std::endl;
	return true;
}

bool isInt(std::string input)
{
	for (size_t i = 0; i < input.size(); i++)
	{
		if (i == 0 && (input[i] == '-' || input[i] == '+'))
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

static bool checkHasDigits(std::string input)
{
	bool hasDigits = false;
	for (size_t i = 0; i < input.size() - 2; i++)
	{
		if (std::isdigit(input[i]))
		{
			hasDigits = true;
			continue;
		}
		if (i == 0 && (input[i] == '+' || input[i] == '-'))
			continue;
		if (input[i] == '.')
			continue;
		return false;
	}
	if (!hasDigits)
		return false;
	return true;
}

// float - 32 bit number, 7 decimal precision
// using IEEE 754 single-precision (4 bytes) - precision 7 significant digits
// check got '.'
// check the last character is 'f'
// check all is digits , except for '.' and 'f'
bool isFloat(std::string input)
{
	// a float must consists of digits, '.' , digits and 'f'
	if (input.size() < 4)
		return false;
	// check the last character is 'f'
	if (input[input.size() - 1] != 'f')
		return false;
	// check dot only exist only one time in the string
	size_t found = input.find(".");
	// std::cout << ".is found at : " << found << std::endl;
	// if not found, return false
	if (found == std::string::npos)
		return false;
	// check if second dot exist
	if (input.find(".", found + 1) != std::string::npos)
		return false;
	// check the precision for 7 digits
	size_t precision = input.size() - found - 2;
	// std::cout << "Precision : " << precision << std::endl;
	if (precision > 7)
		return false;
	// check digits 
	if (!checkHasDigits(input))
		return false;
	std::cout << "This is a float" << std::endl;
	return true;
}

// double - 64 bit number, 15 decimal precision
bool isDouble(std::string input)
{
	if (input.size() < 3)
		return false;
	size_t found = input.find(".");
	if (found == std::string::npos)
		return false;
	if (input.find(".", found + 1) != std::string::npos)
		return false;
	size_t precision = input.size() - found - 2;
	// std::cout << "Precision : " << precision << std::endl;
	if (precision > 16)
		return false;
	if (!checkHasDigits(input))
		return false;
	std::cout << "This is a double" << std::endl;
	return true;
}

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
	std::cout << "input type:" << inputType << std::endl;
	// convert to actual type
	// - use switch, if char, printchar()
	// convert to three other data type
}
