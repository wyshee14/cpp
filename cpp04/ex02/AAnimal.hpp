#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

// Abstract class - with at least one pure virtual function
class AAnimal
{
	protected:
		std::string	_type;

	public:
		AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal &operator=(const AAnimal &other);
        // virtual keyword : chaining process, ensures derived destructor runs when pointer of base class called
        // if no virtual only animal destructor is called
		virtual ~AAnimal();
        const std::string& getType() const;
        // virtual keyword : involes the override in actual dderived object in runtime
		// pure virtual function - force derive class to override this function
        virtual void makeSound() const = 0;
		virtual const Brain* getBrain() const;
};

#endif