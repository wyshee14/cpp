#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this -> _type = other._type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

const std::string& Animal::getType() const
{
    return _type;
}

void Animal::makeSound() const
{
    std::cout << "Animal Zooooo" << std::endl;
}

// to let derived class override when in runtime polymorphism
const Brain* Animal::getBrain() const
{
    return NULL;
}
