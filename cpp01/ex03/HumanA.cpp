# include "HumanA.hpp"

// Reference member must be initialized when object is constructed
HumanA::HumanA(std::string name, Weapon &weaponA) : _weaponA(weaponA), _name(name)
{
    std::cout << "HumanA Constructor Called" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA Destructor Called" << std::endl;
}

const std::string& HumanA::getName( void ) const
{
    return _name;
}

void HumanA::attack( void )
{
    // Reference is an alias, can call the member function like usual
    std::cout << getName() << " attacks with their " << _weaponA.getType() << std::endl;
}