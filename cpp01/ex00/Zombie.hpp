#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define BOLD "\033[1m"

class Zombie
{
    private:
        std::string _name;

    public:
        // Getter
        const std::string& getName() const;
        // Member function
        void announce( void );
        //Constructor
        Zombie(std::string name);
        //Destructor
        ~Zombie();
};

// Free function, can be called without creating an object
Zombie* newZombie( std::string name );
void randomChump(std::string name);

#endif