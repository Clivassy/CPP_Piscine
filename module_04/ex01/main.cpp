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
    int size = 6; 
	const Animal	*CatsAndDogs[size];

    for (int i = 0; i < (size / 2); i++)
    {
        CatsAndDogs[i] = new Cat();
    }
    for (int i = (size / 2); i < size; i++)
    {
        CatsAndDogs[i] = new Dog();
    }
	for (int i = 0; i < size; i++){

		CatsAndDogs[i]->makeSound();
        CatsAndDogs[i]->getIdea(i);
	}
	for (int j = 0; j < size; j++)
    {
		delete CatsAndDogs[j];
	}
	return (0);
}