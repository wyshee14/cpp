# include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Default constructor" << std::endl;
}

// Destructor is called with their name before they exits the function or being deleted
Zombie::~Zombie()
{
    std::cout << getName() << " Destructor Called" << std::endl;
}

const std::string& Zombie::getName( void ) const
{
    return _name;
}

void Zombie::setName( std::string name )
{
    this->_name = name;
}

void Zombie::announce( void )
{
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

