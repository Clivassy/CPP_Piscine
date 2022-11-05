#include "Dog.hpp"

Dog::Dog( void ): AAnimal("Dog")
{ 
    this->brain = new Brain;
    std::cout << "Dog: Constructor called" << std::endl;
}

Dog::~Dog( void )
{
    delete this->brain;
    std::cout << "Dog: Destructor called" << std::endl;
}

void    Dog::makeSound( void )const
{
    std::cout << "Ouaf Ouaf" << std::endl;
}

void    Dog::getIdea(int index)const
{
    std::cout << this->brain->ideas[index] << std::endl;
}