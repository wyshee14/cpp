#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

// Concrete class
class Character : public ICharacter
{
	private:
		std::string	_name;
		// one character can have 4 weapon
		AMateria*	_materias[4];

	public:
		Character(std::string const &name);
		Character();
		// Deep copy
		Character(const Character &copy);
		Character &operator=(const Character &other);
		~Character();
		
		const std::string& getName() const;
		// add Materia from index 0-3
		void equip(AMateria* m);
		// put down the Materia from index 0-3, not delete Materia
		void unequip(int idx);
		// use the Materia from index 0-3
		void use(int idx, ICharacter& target);

};

#endif