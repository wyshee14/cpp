#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"

// Forward declaration - tells the compiler this class exists, avoids circular include dependencies
class AMateria;

// Interface - contains pure virtual function
class ICharacter
{
    public:
        // compiler throw error virtual table definition problem
        // needs at least one out-of-line virtual function implementations
        virtual ~ICharacter(){};
        virtual const std::string& getName() const = 0;
        // add Materia from index 0-3
        virtual void equip(AMateria* m) = 0;
        // put down the Materia from index 0-3, not delete Materia
        virtual void unequip(int idx) = 0;
        // use the Materia from index 0-3
        virtual void use(int idx, ICharacter& target) = 0;
};

# endif
