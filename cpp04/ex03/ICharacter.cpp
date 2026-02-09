#include "ICharacter.hpp"

ICharacter::ICharacter(std::string const &name) : _name(name)
{
    std::cout << "ICharacter Parameterized constructor called" << std::endl;
}

ICharacter::ICharacter()
{
    std::cout << "ICharacter default constructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &copy)
{
    std::cout << "ICharacter copy constructor called" << std::endl;
    *this = copy;
}

ICharacter &ICharacter::operator=(const ICharacter &other)
{
    std::cout << "ICharacter copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this -> _type = other.getName();
    }
    return *this;
}

ICharacter::~ICharacter()
{
    std::cout << "ICharacter destructor called" << std::endl;
}

const std::string& getName() const
{
    return _name;
}
