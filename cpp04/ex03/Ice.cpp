# include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
    std::cout << "Ice copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this -> _type = other.getType();
    }
    return *this;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}

Ice* Ice::clone() const
{
    Ice* cloneIce = new Ice();
}
