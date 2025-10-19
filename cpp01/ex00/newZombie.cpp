# include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    // Dynamic memory allocation
    // When to use new? (heap memory)
    // - when u dont know how much memory will use (user input)
    // - When u want full manual control over memory
    // new Zombie creates a memory space for Zombie
    Zombie* ptr = new Zombie(name);
    // ptr->setName(name);
    // std::cout << ptr->getName() << std::endl;
    // delete ptr;
    return ptr;
}