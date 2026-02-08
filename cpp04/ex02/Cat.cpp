#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
    for(int i = 0; i < 100; i++)
    {
        _brain->setIdeas(i, "meow");
    }
}

Cat::Cat(const Cat &copy) : AAnimal(copy),  _brain(NULL)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_type = other.getType();
        if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*other.getBrain());
    }
    return *this;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat Meaowwwwww" << std::endl;
}

const Brain* Cat::getBrain() const
{
    return _brain;
}
