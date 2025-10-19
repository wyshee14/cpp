# include "Weapon.hpp"

Weapon::Weapon( std::string type):_type(type)
{
    std::cout << "Weapon Constructor Called" << std::endl;
}

Weapon::~Weapon()
{    
    std::cout << "Weapon Destructor Called" << std::endl;
}

const std::string& Weapon::getType( void ) const
{
    return _type;
}

void Weapon::setType( std::string type )
{
    _type = type;
}