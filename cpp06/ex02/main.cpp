# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <ctime>
# include <cstdlib>
# include <iostream>
# include <exception>

Base *generator(void)
{
	// generate different output every time - seed to set a random number
	std::srand(std::time(NULL));
	// create memory on heap - object still exists after this function
	int random = rand() % 3;
	if (random == 0)
		return new A();
	else if (random == 1)
		return new B();
	else
		return new C();
}

void identify(Base *p)
{
	// dynamic_cast returns a valid pointer if cast succeeds, nullptr if fails
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Failed to cast" << std::endl;
}

// Throw std::bad_cast if reference cast fails - is only for std::typeinfo library
// dynamic_cast cast the object p to type &A
void identify(Base &p)
{
	try
	{
		// check if p is A
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e){}

	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception& e){}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception& e){}
}

int main()
{
	Base *random = generator();
	identify(random);	// Pointer version
	identify(*random);	// Reference version

	delete random;
	return 0;
}
