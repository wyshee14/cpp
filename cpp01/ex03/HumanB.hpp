#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    private:
        // Human B not always have a weapon
        // Pointer can be NULL;
        // Weapon can be set later and change the value；
        Weapon *_weaponB;
        std::string _name;

    public:
        void attack( void );
        const std::string& getName( void ) const;
        // Weapon passed as reference
        void setWeapon(Weapon &weaponB);
        HumanB(std::string name);
        ~HumanB();
};

# endif