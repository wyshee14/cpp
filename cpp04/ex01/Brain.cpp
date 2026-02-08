#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &other)
    {
        // copy ideas one by one
        for(int i = 0; i < 100; i++)
            this -> _ideas[i] = other.getIdeas(i);
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

// get string array by index
const std::string& Brain::getIdeas(const int i) const
{
    if (i >= 0 && i <= 99)
        return _ideas[i];
    return NULL;
}

void Brain::setIdeas(const int i, const std::string &idea)
{
    _ideas[i] = idea;
}
