# include "Fixed.hpp"

int main()
{
	float f1 = 0.3333333333333;
	float f2 = 0.3333333333334;

	if (f1 == f2)
		std::cout << "Same number " << f1 << std::setprecision(10) << std::endl;
	else
		std::cout << "Different number" << std::endl;
}

// int main()
// {
// 	Fixed f1("Mark", 42);
// 	Fixed f2("John", 24);

// 	f2 = f1;

// 	std::cout << "h2: " << f2.getName() << std::endl;
// 	std::cout << "h2: " << f2.getAge() << std::endl;

// 	std::cout << "h1: " << f1.getName() << std::endl;
// 	std::cout << "h1: " << f1.getAge() << std::endl;

// 	return 0;
// }
