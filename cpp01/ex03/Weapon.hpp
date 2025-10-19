#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
    private:
        std::string _type;

    public:
        // Getter
        const std::string& getType( void ) const;
        // Setter
        void setType( std::string type );
        Weapon( std::string type);
        ~Weapon();
};

#endif