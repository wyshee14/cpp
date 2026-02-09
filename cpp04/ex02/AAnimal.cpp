#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = copy;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
    std::cout << "AAnimal copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this -> _type = other.getType();
    }
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

const std::string& AAnimal::getType() const
{
    return _type;
}

void AAnimal::makeSound() const
{
    std::cout << "AAnimal Zooooo" << std::endl;
}

// to let derived class override when in runtime polymorphism
const Brain* AAnimal::getBrain() const
{
    return NULL;
}
