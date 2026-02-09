#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string _type;

    public:
        AMateria(std::string const &type);
        AMateria();
        AMateria(const AMateria &copy);
        AMateria &operator=(const AMateria &other);
        ~AMateria();

        const std::string& getType() const;     // Returns materia type
        // Pure virtual function
        virtual AMateria* clone const = 0;
        // virtual void use(ICharacter& target);
};

# endif