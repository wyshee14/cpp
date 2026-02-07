#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	const Animal* i = new Cat();
	// const WrongAnimal* wrongCat = new WrongCat();

	// std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	const std::string* ideas = i->getBrain();
	for (int i = 0; i < 5; i++)
		std::cout << "idea[" << i << "] = " << ideas[i] << std::endl;
	// j->makeSound();
	i->makeSound();
	// meta->makeSound();
	// wrongCat->makeSound();

	// delete meta;
	// delete j;
	delete i;

	return 0;
}