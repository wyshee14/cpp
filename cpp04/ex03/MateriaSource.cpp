#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        _materias[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    std::cout << "MateriaSource copy assignment operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            // Delete existing materias first
            for (int i = 0; i < 4; i++)
            {
                if (this-> _materias[i] != NULL)
                    delete this->_materias[i];
            }
            // Deep copy new materias
            for (int i = 0; i < 4; i++)
            {
                if (other._materias[i] != NULL)
                    this->_materias[i] = other._materias[i]->clone();
                else
                    this->_materias[i] = NULL;
            }
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (_materias[i] != NULL)
            delete _materias[i];
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    for(int i = 0; i < 4; i++)
    {
        if(_materias[i] == NULL)
        {
            _materias[i] = m;
            std::cout << "Learned Materia " << m->getType() << std::endl;
            return ;
        }
    }
    std::cout << "Failed to learn Materia, memory full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for(int i = 0; i < 4; i++)
    {
        if (_materias[i] != NULL && _materias[i]->getType() == type)
        {
            return (_materias[i]->clone());
        }
    }
    std::cout << "Failed to create Materia. Invalid type <" << type << ">." << std::endl;
    return 0;
}