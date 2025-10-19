# include "Zombie.hpp"

int main()
{
    std::cout << GREEN << BOLD << "TEST FOR NORMAL ZOMBIE" << RESET << std::endl;
    // Object created in stack memory
    Zombie myZombie("Foo");
    myZombie.announce();

    std::cout << std::endl << GREEN << BOLD << "TEST FOR newZombie" << RESET << std::endl;
    // Pointer that stores the address of the new object created
    Zombie* ptr = newZombie("Dynamic");
    // Object in heap memory is accessible even exits the function 
    ptr->announce();
    // free memory allocation for this object
    delete ptr;

    std::cout << std::endl << GREEN << BOLD << "TEST FOR randomChump" << RESET << std::endl;
    randomChump("Random");
    // obj does not exist after it exits the function, cannot call the function
    // Random.announce();

    return 0;
}