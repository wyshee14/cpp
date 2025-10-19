# include <iostream>
# include "Zombie.hpp"

int main()
{
    std::cout << GREEN << BOLD << "TEST FOR NORMAL ZOMBIE" << RESET << std::endl;
    Zombie myZombie("Foo");
    myZombie.announce();

    std::cout << std::endl << GREEN << BOLD << "TEST FOR newZombie" << RESET << std::endl;
    Zombie* ptr = newZombie("Dynamic");
    ptr->announce();
    delete ptr;

    std::cout << std::endl << GREEN << BOLD << "TEST FOR randomChump" << RESET << std::endl;
    randomChump("Random");

    return 0;
}