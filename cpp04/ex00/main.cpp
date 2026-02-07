#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	wrongCat->makeSound();

	delete meta;
	delete j;
	delete i;

	// Animal zootopia;
	// Animal judy(zootopia);
	// Animal nick;
	// nick = zootopia;
	// nick.makeSound();
	
	// Dog dog1;
	// Dog dog2(dog1);
	// std::cout << "dog1 type: " << dog1.getType() << std::endl; 
	// std::cout << "dog2 type: " << dog2.getType() << std::endl; 
	// dog1.makeSound();

	// Cat cat1;
	// std::cout << "cat1 type: " << cat1.getType() << std::endl; 
	// cat1.makeSound();

	return 0;
}