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


// Test
/*int	main()
{
    int size = 6; 
	const Animal	*CatsAndDogs[size];

    for (int i = 0; i < (size / 2); i++)
    {
        CatsAndDogs[i] = new Cat();
    }
    std::cout << std::endl;
    for (int i = (size / 2); i < size; i++)
    {
        CatsAndDogs[i] = new Dog();
    }
    std::cout << std::endl;
	for (int i = 0; i < size; i++){

		CatsAndDogs[i]->makeSound();
       // CatsAndDogs[i]->getIdea(i);
	}
    std::cout << std::endl;
	for (int j = 0; j < size; j++)
    {
		delete CatsAndDogs[j];
	}
	return (0);
}*/

// Test de copie profonde
int main()
{
    Cat test3;
    {
        std::cout << test3.getType() << std::endl;
        Cat test1 = test3;
        std::cout << test1.getType() << std::endl;
    }
    Dog test;
    {
        std::cout << test.getType() << std::endl;
        Dog test1 = test;
        std::cout << test1.getType() << std::endl;
    }
}