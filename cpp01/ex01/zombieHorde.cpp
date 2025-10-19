# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
    {
        std::cout << "Invalid size" << std::endl;
        return NULL;
    }
    // allocate N Zombie objects in a single allocation in an array with default constructor
    // Cannot use parameterized constructor, can only be use for one obj creation
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        // Initialize name with parameter using setter
        horde[i].setName(name);
    }
    // returns a pointer to the first zombie
    return horde;
}