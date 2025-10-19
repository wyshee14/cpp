# include "Zombie.hpp"

// Create an object at stack memory
// Object no longer exist after quit this function
void randomChump(std::string name)
{
    // Create a new object of class Zombie
    Zombie randomZombie(name);

    // Object can call the member function within this function
    randomZombie.announce();
}