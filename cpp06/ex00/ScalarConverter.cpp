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
	// std::cout << "This is a char" << std::endl;
	return true;
}

// int - 32 bit
bool isInt(std::string input)
{
	for (size_t i = 0; i < input.size(); i++)
	{
		if (i == 0 && (input[i] == '-' || input[i] == '+'))
			i++;
		if (!std::isdigit(input[i]))
			return false;
	}
	// std::cout << "This is a int" << std::endl;
	return true;
}

static bool checkHasDigits(std::string input, char last)
{
	bool hasDigits = false;
	for (size_t i = 0; i < input.size(); i++)
	{
		if ((i == input.size() - 1) && last == 'f')
			continue ;
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
	// if not found, return false
	if (found == std::string::npos)
		return false;
	// check if second dot exist
	if (input.find(".", found + 1) != std::string::npos)
		return false;
	// check the precision for 7 digits
	if (!checkHasDigits(input, 'f'))
		return false;
	// std::cout << "This is a float" << std::endl;
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
	if (precision > 16)
		return false;
	if (!checkHasDigits(input, 'd'))
		return false;
	// std::cout << "This is a double" << std::endl;
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

void convertChar(std::string input)
{
	char c = input[0];
	if (std::isprint(c))
	{
		std::cout << "char: " << c << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	}
	else
		std::cout << "Non displayable" << std::endl;
}

void convertInt(std::string input)
{
	long result = 0;
	for (size_t i = 0; i < input.size(); i++)
	{
		if (i == 0 && (input[i] == '+' || input[i] == '-'))
			continue ;
		result = result * 10 + (input[i] - '0');
	}
	if (input[0] == '-')
		result *= -1;

	// print
	std::cout << "char: ";
	// extra handling for isprint which accepts int parameter
	if (result < 0 || result > 127)
		std::cout << "impossible" << std::endl;
	else
	{
		if (std::isprint(result))
			std::cout << static_cast<char>(result) << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	std::cout << "int: ";
	// handle int min and max - convert string to number first
	if (result > INT_MAX || result < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << result << std::endl;
	std::cout << "float: ";
	if (result > INT_MAX || result < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(result) << ".0f" << std::endl;
	std::cout << "double: ";
	if (result > INT_MAX || result < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<double>(result) << ".0" << std::endl;
}

void convertFloat(std::string input)
{
	float f = std::atof(input.c_str());
	//print
	std::cout << "char: ";
	if (f < 0 || f > 127)
		std::cout << "impossible" << std::endl;
	else
	{
		if (std::isprint(f))
			std::cout << static_cast<char>(f) << std::endl;
		else
			std:: cout << "Non displayable" << std::endl;
	}
	std::cout << "int: ";
	// int_mx is automatically convert into double
	double d = static_cast<double>(f);
	if (d > INT_MAX || f < INT_MIN)
	{
		std::cout << "impossible" << std::endl;
	}
	else
		std::cout << static_cast<int>(d) << std::endl;
	std::cout << "float: ";
	if (f > std::numeric_limits<float>::max() || f < -std::numeric_limits<float>::max())
		std::cout << "impossible" << std::endl;
	else
	{
		std::cout << std::fixed << std::setprecision(1);
		std::cout << f << "f" << std::endl;
	}
	std::cout << "double: ";
	if (f > std::numeric_limits<float>::max() || f < -std::numeric_limits<float>::max())
		std::cout << "impossible" << std::endl;
	else
	{
		std::cout << std::fixed << std::setprecision(1);
		std::cout << static_cast<double>(f) << std::endl;
	}
}

void convertDouble(std::string input)
{
	std::stringstream ss(input);
	double d1;
	ss >> d1;
	std::cout << "char: ";
	if (d1 < 0 || d1 > 127)
		std::cout << "impossible" << std::endl;
	else
	{
		if (std::isprint(d1))
			std::cout << static_cast<char>(d1) << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	std::cout << "int: ";
	if (d1 > INT_MAX || d1 < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(d1) << std::endl;
	std::cout << "float: ";
	// min is the smallest positive normalized value, is not the lowest value
	if (d1 > std::numeric_limits<float>::max() || d1 < -std::numeric_limits<float>::max())
		std::cout << "impossible" << std::endl;
	else
	{
		std::cout << std::fixed << std::setprecision(1);
		std::cout << static_cast<float>(d1) << "f" << std::endl;
	}
	std::cout << "double: ";
	if (d1 > std::numeric_limits<double>::max() || d1 < -std::numeric_limits<double>::max())
		std::cout << "impossible" << std::endl;
	else
	{
		std::cout << std::fixed << std::setprecision(1);
		std::cout << d1 << std::endl;
	}
}

void convertIsPseudo(std::string input)
{
	const char *pseudo[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		if (input == pseudo[i])
		{
			if (i == 0 || i == 3)
			{
				std::cout << "float: " << pseudo[0] << std::endl;
				std::cout << "double: " << pseudo[3] << std::endl;
			}
			else if (i == 1 || i == 4)
			{
				std::cout << "float: " << pseudo[1] << std::endl;
				std::cout << "double: " << pseudo[4] << std::endl;
			}
			else if (i == 2 || i == 5)
			{
				std::cout << "float: " << pseudo[2] << std::endl;
				std::cout << "double: " << pseudo[5] << std::endl;
			}
		}
	}
}

void convertInvalid()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

void ScalarConverter::convert(const char *arg)
{
	std::string input(arg);
	// first detect the type - whether is int, char, float, double
	type inputType = detectType(input);
	// convert to actual type
	// check overflow/invalid - display error message
	switch (inputType)
	{
		case CHAR:
			convertChar(input);
			break ;
		case INT:
			convertInt(input);
			break ;
		case FLOAT:
			convertFloat(input);
			break ;
		case DOUBLE:
			convertDouble(input);
			break ;
		case PSEUDO:
			convertIsPseudo(input);
			break ;
		case INVALID:
			convertInvalid();
			break ;
	}
}
