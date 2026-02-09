#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

// Abstract class 
class ICharacter
{
    private:
        std::string _name;

    public:
        ICharacter(std::string const &name);
        ICharacter();
        ICharacter(const ICharacter &copy);
        ICharacter &operator=(const ICharacter &other);
        virtual ~ICharacter();
        
        virtual const std::string& getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        cirtual void use(int idx, ICharacter& target) = 0;
};

# endif
