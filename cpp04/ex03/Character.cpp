#include "Character.hpp"

Character::Character(std::string const &name) : _name(name)
{
    std::cout << "Character Parameterized constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->_materias[i] = NULL;
    }
}

Character::Character() : _name("Default")
{
    std::cout << "Character default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->_materias[i] = NULL;
    }
}

// Change to deep copy
Character::Character(const Character &copy) : _name(copy.getName())
{
    std::cout << "Character copy constructor called" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        // check if copy materias is NULL
        if (copy._materias[i] != NULL)
            _materias[i] = copy._materias[i]->clone();
        else
            _materias[i] = NULL;
    }
}

Character &Character::operator=(const Character &other)
{
    std::cout << "Character copy assignment operator called" << std::endl;
    if (this != &other)
    {
        // copy name
        this->_name = other.getName();
        // Delete existing materias first
        for (int i = 0; i < 4; i++)
        {
            if(this-> _materias[i] != NULL)
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
    return *this;
}

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (_materias[i] != NULL)
            delete _materias[i];
    }
}

const std::string& Character::getName() const
{
    return _name;
}

void Character::equip(AMateria* m)
{
    for(int i = 0; i < 4; i++)
    {
        if(_materias[i] == NULL)
        {
            _materias[i] = m;
            std::cout << "Materia of type " << m->getType() << " is equipped successfully" << std::endl;
            return ;
        }
    }
    std::cout << "Equip Unsuccessful. Inventory is full, try to unquip a Materia first" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3 && _materias[idx] != NULL)
    {
        _materias[idx] = NULL;
        std::cout << "Materia index " << idx << " is unequipped successfully" << std::endl;
        return ;
    }
    std::cout << "Unequip Unsuccessful. Inventory index not exist or empty, unequip inventory within index 0 - 3" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
    if ((idx < 0 || idx > 3))
    {
        std::cout << "Inventory index not exist, use index within 0 - 3" << std::endl;
        return ;
    }
    if (_materias[idx] == NULL)
    {
        std::cout << "Inventory idx " << idx << " has no Materia to use" << std::endl;
        return ;
    }
    _materias[idx]->use(target);
}
