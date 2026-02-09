# include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
    std::cout << "Cure copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this -> _type = other.getType();
    }
    return *this;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

Cure* Cure::clone() const
{
    Cure* cloneCure = new Cure();
}
