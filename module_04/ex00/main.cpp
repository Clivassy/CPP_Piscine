#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

//-----------------------------
// Main fourni par le sujet 
//-----------------------------

/* int main()
{
    const Animal* meta = new Animal(); 
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl; 
    std::cout << i->getType() << " " << std::endl; 
    i->makeSound(); //will output the cat sound! 
    j->makeSound();
    meta->makeSound();

    return 0; 
} 
*/

int main()
{
    //-------- Tests with Animal ---------------
    std::cout << GREEN "-------- ANIMAL OBJECT TESTS -----------" CLEAR << std::endl;
    std::cout << YELLOW "        Objects creation              " CLEAR << std::endl;
    const Animal* animal = new Animal();
    const Animal* koala = new Animal("Koala"); 
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << YELLOW "----------- types  --------------" CLEAR << std::endl;
    std::cout << "Constructor Animal by default: " << animal->getType() << " " << std::endl;
    std::cout << "Constructor Animal + string: " << koala->getType() << " " << std::endl;
    std::cout << "Constructor Dog: "  << dog->getType() << " " << std::endl; 
    std::cout << "Constructor Cat: " << cat->getType() << " " << std::endl; 

    std::cout << YELLOW "----------- Sounds --------------" CLEAR << std::endl;
    std::cout << "Cat sound : " ; cat->makeSound(); // should  output the cat sound! 
    std::cout << "Dog sound : " ; dog->makeSound(); // should  output the dog sound! 
    std::cout << "Animal default sound : " ; animal->makeSound(); // should output no sound! 

    std::cout << GREEN "-----------------------------------------" CLEAR << std::endl;
    delete animal;
    delete koala;
    delete cat;
    delete dog;

    //-------- Tests with Wrong Animal --------------
    std::cout << GREEN "------- WRONG_ANIMAL OBJECT TESTS ----------" CLEAR << std::endl;
    const WrongAnimal* wronganimal = new WrongAnimal(); 
    const WrongAnimal* wrongcat = new WrongCat();

    wronganimal->makeSound(); //should output no sound! 
    wrongcat->makeSound(); // should output no sound! 
    std::cout << GREEN "-----------------------------------------" CLEAR << std::endl;

    delete wronganimal;
    delete wrongcat;

    return (0); 
}
