# include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    std::cout << "HumanB Constructor Called" << std::endl;
    _weaponB = NULL;
}

HumanB::~HumanB()
{
    std::cout << "HumanB Destructor Called" << std::endl;
}

const std::string& HumanB::getName( void ) const
{
    return _name;
}

void HumanB::setWeapon(Weapon &weaponB)
{
    // club = &weapon
    // Store the memory address of that object that is referenced
    _weaponB = &weaponB;
    // This would cause segfault as *_weaponB is a nullptr, cannot be overwrite, no valid address
    // *_weaponB = weaponB
}

void HumanB::attack( void )
{
    // Pointer stores the address of an object
    // Have to dereference it to access the member function, can also write as (*_weaponB).getType()
    // check if it is a nullptr, would cause segfault
    if (_weaponB)
        std::cout << getName() << " attacks with their " << _weaponB->getType() << std::endl;
    else
        std::cout << "No weapon equipped" << std::endl;
}