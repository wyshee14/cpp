# include "Zombie.hpp"

// Parameterized constructor with name
Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Zombie Constructor Called" << std::endl;
}

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

