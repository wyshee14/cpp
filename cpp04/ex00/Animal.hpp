#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(const Animal &copy);
		Animal &operator=(const Animal &other);
        // virtual keyword : chaining process, ensures derived destructor runs when pointer of base class called
        // if no virtual only animal destructor is called
		virtual ~Animal();
        const std::string& getType() const;
        // virtual keyword : involes the override in actual dderived object in runtime
        virtual void makeSound() const;
};

#endif