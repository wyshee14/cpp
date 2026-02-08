#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
    this->_type = "Dog";
	this->_brain = new Brain();
	for(int i = 0; i < 100; i++)
    {
        _brain->setIdeas(i, "barks");
    }
}

// copy constructor invokes copy assignment operator, which checks brain is NULL
// initialize _brain to NULL to prevent read garbage value, will cause segfault
Dog::Dog(const Dog &copy) : Animal(copy), _brain(NULL)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other.getType();
		// getBrain returns const, compiler throwsa error
		// solution: delete the old brain and make a new brain
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*other.getBrain());
	}
	return *this;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog barkssss" << std::endl;
}

const Brain* Dog::getBrain() const
{
    return _brain;
}
