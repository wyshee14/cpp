# include <iostream>
# include "whatever.hpp"

int main()
{
	std::cout << "---TESTING FOR MAX---" << std::endl;
	std::cout << "Max of 3 and 7 is: " << max<int>(3, 7) << std::endl;
	std::cout << "Max of 3.5 and 7.5 is: " << max<double>(3.5, 7.5) << std::endl;
	std::cout << "Max of 3 and 3 is: " << max<int>(3, 3) << std::endl;
	std::cout << "Max of 3 and a is: " << max<int>(3, 'a') << "\n" << std::endl;

	std::cout << "---TESTING FOR MIN---" << std::endl;
	std::cout << "Max of 3 and 7 is: " << min<int>(3, 7) << std::endl;
	std::cout << "Max of 3.5 and 7.5 is: " << min<double>(3.5, 7.5) << std::endl;
	std::cout << "Max of 3 and 3 is: " << min<int>(3, 3) << std::endl;
	std::cout << "Max of 3 and a is: " << min<int>(3, 'a') << "\n" << std::endl;

	std::cout << "---TESTING FOR MAIN--" << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}
