# include "Cure.hpp"

// Default constructor sets the _type as cure
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

// const doesnt modify the object
// creates and return a deep copy of Cure
// calls copy constructor to clone, else just an empty new object
// returns a pointer to the clone object which cast as AMateria (base class), as defined in AMateria class
AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}