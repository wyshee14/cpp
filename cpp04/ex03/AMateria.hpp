#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

// Forward decalaration
class ICharacter;

// Abstract class
class AMateria
{
    protected:
        std::string _type;

    public:
        AMateria(std::string const &type);
        AMateria();
        AMateria(const AMateria &copy);
        AMateria &operator=(const AMateria &other);
        virtual ~AMateria();

        const std::string& getType() const;     // Returns materia type
        // Pure virtual function, no need to write in .cpp file
        virtual AMateria* clone() const = 0;
        // must be =0 to let derived class override the function
        // else derived class can skip this implementation
        virtual void use(ICharacter& target) = 0;
};

# endif