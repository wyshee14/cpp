#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    private:
        // Human A always has a weapon
        // Reference pointer must refer to something
        Weapon &_weaponA;
        std::string _name;

    public:
        const std::string& getName( void ) const;
        void attack( void );
        HumanA(std::string name, Weapon &_weaponA);
        ~HumanA();
};

# endif