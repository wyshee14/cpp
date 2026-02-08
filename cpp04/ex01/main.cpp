#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	// Test constructor
	Dog dog1;
	Dog dog2(dog1);
	for (int i = 0; i < 5; i++)
		std::cout << "idea[" << i << "] = " << dog2.getBrain()->getIdeas(i) << std::endl;
	std::cout << "----------------------" << std::endl;

	// Subject
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	// const std::string* ideas = i->getBrain()->getIdeas();
	for (int k = 0; k < 5; k++)
		std::cout << "idea[" << k << "] = " << i->getBrain()->getIdeas(k) << std::endl;
	delete j;
	delete i;

	// Test animal in array
	std::cout << "----Test----" << std::endl;
	Animal* meta[4];
	for(int i = 0; i < 4; i++)
	{
		if (i < 2)
			meta[i] = new Cat();
		else
			meta[i] = new Dog();
		meta[i]->makeSound();
	}
	for(int i = 0; i < 4; i++)
		delete meta[i];

	return 0;
}