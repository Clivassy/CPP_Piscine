#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// main du sujet
/*int	main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;

return 0;
}*/

int	main()
{
	const Animal	*CatsAndDogs[100];

    for (int i = 0; i < 50; i++)
    {
        CatsAndDogs[i] = new Cat();
    }
    for (int i = 50; i < 100; i++)
    {
        CatsAndDogs[i] = new Dog();
    }
	for (int i = 0; i < 100; i++){

		CatsAndDogs[i]->makeSound();
        CatsAndDogs[i]->getIdea(i);
	}
	for (int j = 0; j < 100; j++)
    {
		delete CatsAndDogs[j];
	}
	return (0);
}