# include "Harl.hpp"

int main()
{
    // Create and instance of class Harl
    Harl instance;
    // Pointer stores the address of instance
    Harl *instancep = &instance;

    // Function pointer to point to the member 
    // return_type (ClassName::*pointer_name)(argument_types) = &ClassName::member_function;
    // take the address of the member attributes
    void (Harl::*f)( std::string );
    // does not define which instance yet
    f = &Harl::complain;
    // ptr dereference the func ptr to call the member function of the obj
    (instance.*f)("debug");
    // Dereference the instance to call the member fucntion
    (instancep->*f)("info");
    
    return 0;
}

// Example of accessing and modifying member variable using pointer to member
// int Harl::*p = NULL;
// p = &Harl::x;
// std::cout << "Value of x: " << instance.x <<std::endl;
// instance.*p = 20;
// std::cout << "Value of x: " << instance.x <<std::endl;
// instancep->*p = 42;
// std::cout << "Value of x: " << instance.x <<std::endl;
