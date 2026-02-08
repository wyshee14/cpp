#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	AAnimal* dog = new Dog();
	AAnimal* cat = new Cat();
	dog->makeSound();
	cat->makeSound();

	delete dog;
	delete cat;

	// Abstract class cannot instantiate object, compiler will throw error
	// AAnimal meta;
	// meta.makeSound();

	return 0;
}