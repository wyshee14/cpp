# include "Zombie.hpp"

// Parameterized constructor with name
Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Zombie Constructor Called" << std::endl;
}

// Destructor is called with their name before they exits the function or being deleted
Zombie::~Zombie()
{
    std::cout << getName() << " Destructor Called" << std::endl;
}

const std::string& Zombie::getName() const
{
    return _name;
}

void Zombie::announce( void )
{
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

