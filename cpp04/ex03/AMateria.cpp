#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "AMateria Parameterized constructor called" << std::endl;
}

AMateria::AMateria()
{
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = copy;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    std::cout << "AMateria copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this -> _type = other.getType();
    }
    return *this;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

const std::string& AMateria::getType() const
{
    return _type;
}
